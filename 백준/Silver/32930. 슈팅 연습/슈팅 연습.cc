#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    struct s { int x, y; };
    vector<s> v(n);
    vector<bool> u(n);

    for(int i=0; i<n; i++) cin >> v[i].x >> v[i].y;

    int x = 0, y = 0, ans = 0;

    while(m--) {
        int mx = 0, idx = 0;

        for(int i=0; i<v.size(); i++) {
            if(u[i]) continue;

            int d = pow(x - v[i].x, 2) + pow(y - v[i].y, 2);

            if(d > mx) {
                mx = d;
                idx = i;
            }
        }

        ans += pow(x - v[idx].x, 2) + pow(y - v[idx].y, 2);
        u[idx] = true;
        x = v[idx].x, y = v[idx].y;

        int xx, yy; cin >> xx >> yy;

        v.push_back({xx, yy});
        u.push_back(false);
    }

    cout << ans << "\n";
}
