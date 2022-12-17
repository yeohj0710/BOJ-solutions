#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(2);

    int T; cin >> T;

    vector<double> v = {350.34, 230.90, 190.55, 125.30, 180.90};

    while(T--) {
        double ans = 0;

        for(int i=0; i<5; i++) {
            int x; cin >> x;

            ans += v[i] * x;
        }

        cout << "$" << ans << "\n";
    }
}
