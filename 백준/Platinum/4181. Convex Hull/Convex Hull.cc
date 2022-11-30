#include <bits/stdc++.h>
#define int long long
using namespace std;

struct p { int x, y; };
vector<p> v;

int ccw(p a, p b, p c) {
    return a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);
}

bool cmp(p a, p b) {
    int x = ccw(v[0], a, b);

    if(x != 0) return x > 0;
    else if(a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=0; i<N; i++) {
        int x, y; char ch; cin >> x >> y >> ch;

        if(ch == 'Y') v.push_back({x, y});
    }

    for(int i=1; i<v.size(); i++)
        if(v[i].x < v[0].x || (v[i].x == v[0].x && v[i].y < v[0].y)) swap(v[i], v[0]);

    sort(v.begin()+1, v.end(), cmp);

    int idx = v.size()-1;

    while(ccw(v[0], v[v.size()-1], v[idx]) == 0) idx--;

    reverse(v.begin()+idx+1, v.end());

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++)
        cout << v[i].x << " " << v[i].y << "\n";
}
