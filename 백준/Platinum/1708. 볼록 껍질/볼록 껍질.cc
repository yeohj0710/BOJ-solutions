#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };
vector<P> v;

int ccw(P a, P b, P c) {
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
}

bool cmp(P &a, P &b) {
    int x = ccw(v[0], a, b);
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

    stack<P> s;

    s.push(v[0]);
    s.push(v[1]);

    for(int i=2; i<N; i++) {
        while(s.size() >= 2) {
            P a = s.top(); s.pop();
            P b = s.top();

            if(ccw(b, a, v[i]) > 0) {
                s.push(a);
                break;
            }
        }
        s.push(v[i]);
    }

    cout << s.size() << "\n";
}
