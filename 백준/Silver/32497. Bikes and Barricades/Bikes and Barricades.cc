#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    double ans = INT_MAX;

    while(n--) {
        double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == x2) continue;
        if(x1 * x2 > 0) continue;

        double y = -x1 * (y2 - y1) / (x2 - x1) + y1;

        if(y >= 0) ans = min(ans, y);
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << "-1.0" << "\n";
}
