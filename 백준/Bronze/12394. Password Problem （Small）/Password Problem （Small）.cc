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

        double ans = m + 2;

        for(int k=0; k<=n; k++) {
            double sum = 0;

            for(int i=0; i<(1<<n); i++) {
                double val = 1;

                for(int j=0; j<n; j++) {
                    if((i >> j) & 1) val *= v[j];
                    else val *= (1 - v[j]);
                }

                bool chk = true;

                for(int j=0; j<n-k; j++)
                    if(!((i >> j) & 1)) chk = false;

                if(chk) sum += val * (k + m - (n - k) + 1);
                else sum += val * (k + m - (n - k) + 1 + m + 1);
            }

            ans = min(ans, sum);
        }

        cout << fixed << setprecision(6);
        cout << ans << "\n";
    }
}
