#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

P operator-(P a, P b) {
    P c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c;
}

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

    vector<P> u(s.size());
    while(!s.empty()) {
        u[s.size()-1] = s.top();
        s.pop();
    }

    int l = 0, r = 0;
    for(int i=0; i<u.size(); i++) {
        if(u[i].x < u[l].x) l = i;
        if(u[i].x > u[r].x) r = i;
    }

    double ans = sqrt(pow(u[l].x - u[r].x, 2) + pow(u[l].y - u[r].y, 2));
    P o = {0, 0};

    for(int i=0; i<u.size(); i++) {
        int nl = (l+1) % u.size();
        int nr = (r+1) % u.size();

        if(ccw(o, u[nl] - u[l], u[r] - u[nr]) > 0) l = nl;
        else r = nr;

        ans = max(ans, sqrt(pow(u[l].x - u[r].x, 2) + pow(u[l].y - u[r].y, 2)));
    }

    cout << fixed;
    cout.precision(6);

    cout << ans << "\n";
}
