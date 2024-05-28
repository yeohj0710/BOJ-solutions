#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> v(n+1);
        for(int i=n/2+1; i<=n; i++) cin >> v[i];

        int cur = n / 2;

        while(cur > 0) {
            for(int i=cur/2+1; i<=cur; i++) {
                int mn = min(v[i*2], v[i*2+1]);

                v[i*2] -= mn;
                v[i*2+1] -= mn;
                v[i] += mn;
            }

            cur /= 2;
        }

        int ans = 0;
        for(int i=1; i<=n; i++) ans += v[i];

        cout << ans << "\n";
    }
}
