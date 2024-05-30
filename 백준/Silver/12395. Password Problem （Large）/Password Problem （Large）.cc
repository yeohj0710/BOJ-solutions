#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n, m; cin >> n >> m;

        vector<double> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        double ans = m + 2, val = 1;

        for(int i=0; i<n; i++) {
            val *= v[i];
            ans = min(ans, (n - 1 - i) * 2 + (m - n) + 1 + (m + 1) * (1 - val));
        }

        cout << fixed << setprecision(6);
        cout << ans << "\n";
    }
}
