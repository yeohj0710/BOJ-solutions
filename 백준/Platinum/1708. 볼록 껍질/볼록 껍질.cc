#include <bits/stdc++.h>
#define int long long
using namespace std;

struct p { double x, y; };
vector<p> v;

double ccw(p a, p b, p c) {
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
}

bool cmp(p a, p b) {
    double x = ccw(v[0], a, b);

    if(x != 0) return x > 0;
    else if(a.y != b.y) return a.y < b.y;
    else return a.x < b.x;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    for(int i=1; i<N; i++)
        if(v[i].y < v[0].y || (v[i].y == v[0].y && v[i].x < v[0].x)) swap(v[i], v[0]);

    sort(v.begin()+1, v.end(), cmp);


    stack<p> s;
    s.push(v[0]);
    s.push(v[1]);

    for(int i=2; i<N; i++) {
        while(s.size() >= 2) {
            p a = s.top();
            s.pop();

            p b = s.top();

            if(ccw(b, a, v[i]) > 0) {
                s.push(a);
                break;
            }
        }
        s.push(v[i]);
    }

    cout << s.size() << "\n";
}
