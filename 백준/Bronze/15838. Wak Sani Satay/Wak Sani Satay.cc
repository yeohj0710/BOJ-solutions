#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    for(int t=1; ; t++) {
        int n; cin >> n;

        if(n == 0) break;

        double ans = 0;

        for(int i=0; i<n; i++) {
            double a, b, c, d; cin >> a >> b >> c >> d;

            ans += a * 0.8 + b * 1 + c * 1.2 + d * 0.8;
            ans -= a * 7.5 / 85 + b * 24 / 85 + c * 32 / 85 + (a + b + c) * 8 / 85 + d * 0.2;
        }

        cout << fixed << setprecision(2);
        cout << "Case #" << t << ": RM" << ans << "\n";
    }
}
