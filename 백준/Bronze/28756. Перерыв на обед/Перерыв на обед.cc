#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    int n; cin >> n;

    double ans = DBL_MAX;

    while(n--) {
        double a, b, c; cin >> a >> b >> c;

        double tot = sqrt(pow(x1 - a, 2) + pow(y1 - b, 2)) + c + sqrt(pow(x2 - a, 2) + pow(y2 - b, 2));

        ans = min(ans, tot);
    }

    cout << fixed << setprecision(9);
    cout << ans << "\n";
}
