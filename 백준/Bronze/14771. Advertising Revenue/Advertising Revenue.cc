#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Data Set " << t << ":\n";

        int n, m; cin >> n >> m;

        struct s { int a, b; };
        vector<s> v(n+1);

        for(int i=1; i<=n; i++) cin >> v[i].a >> v[i].b;

        int ans = 0;

        while(m--) {
            int a, b, c; cin >> a >> b >> c;

            if(v[a].a == 1) ans += v[a].b;
            if(v[b].a == 1) ans += v[b].b;

            if(c == 1 && v[a].a == 0) ans += v[a].b;
            if(c == 2 && v[b].a == 0) ans += v[b].b;
        }

        cout << ans << "\n";
        cout << "\n";
    }
}
