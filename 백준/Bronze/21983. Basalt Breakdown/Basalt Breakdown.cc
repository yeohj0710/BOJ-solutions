#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x; cin >> x;

    x /= 6;

    x = sqrt(4.0 * x / sqrt(3));

    x *= 6;

    cout << fixed;
    cout.precision(7);

    cout << x << "\n";
}
