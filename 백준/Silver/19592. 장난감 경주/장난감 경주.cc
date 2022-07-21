#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double N, x, y; cin >> N >> x >> y;

        vector<double> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end()-1, greater<double>());

        if(v[N-1] > v[0]) {
            cout << 0 << "\n";
            continue;
        }

        double a = x / v[0];

        if(a <= 1.0 + (x - y)/v[N-1]) {
            cout << -1 << "\n";
            continue;
        }

        int l = 1, r = y, ans = INT_MAX;

        while(l <= r) {
            int m = (l + r) / 2;

            double b = 1.0 + (x - m)/v[N-1];

            if(b < a) {
                ans = min(ans, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        cout << ans << "\n";
    }
}
