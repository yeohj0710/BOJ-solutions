#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double d, h; cin >> d >> h;

    double r = d / 2 + 5;

    double ans = M_PI * r * r + 2 * M_PI * r * h;

    cout << fixed << setprecision(6);

    cout << ans << "\n";
}
