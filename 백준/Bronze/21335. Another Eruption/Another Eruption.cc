#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x; cin >> x;

    double r = sqrt(x / M_PI);

    double ans = 2.0 * M_PI * r;

    cout << fixed;
    cout.precision(6);

    cout << ans << "\n";
}
