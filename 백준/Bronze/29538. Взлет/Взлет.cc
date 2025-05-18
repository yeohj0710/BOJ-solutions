#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double m, n, a; cin >> m >> n >> a;

    double tot = 0;

    for(int i=0; i<n; i++) {
        double x; cin >> x;

        tot += x;
    }

    if(1.0 <= a / 1000) {
        cout << "Impossible\n";

        return 0;
    }

    double ans = a / 1000 * (m + tot) / (1.0 - a / 1000);

    cout << fixed << setprecision(6);
    cout << ans << "\n";
}
