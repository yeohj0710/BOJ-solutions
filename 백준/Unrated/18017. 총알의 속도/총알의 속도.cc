#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b; cin >> a >> b;

    double c = 299792458;

    double ans = (a + b) / (1 + (a * b) / (c * c));

    cout << fixed;
    cout.precision(9);

    cout << ans << "\n";
}
