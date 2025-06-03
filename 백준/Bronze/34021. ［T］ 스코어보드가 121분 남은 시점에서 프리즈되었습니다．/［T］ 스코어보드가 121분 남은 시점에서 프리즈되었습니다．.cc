#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n, m, k; cin >> n >> m >> k;

        int ans = k;

        int mn = LLONG_MAX;

        while(n--) {
            int x; cin >> x;

            if(x == -1 || x >= m) continue;

            mn = min(mn, x);
        }

        if(mn != LLONG_MAX) ans = max(ans, m - mn);

        if(ans != 1) cout << "The scoreboard has been frozen with " << ans << " minutes remaining.\n";
        else cout << "The scoreboard has been frozen with " << ans << " minute remaining.\n";
    }
}
