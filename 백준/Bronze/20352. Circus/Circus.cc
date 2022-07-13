#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x; cin >> x;

    double r = sqrt(x / M_PI);

    cout << fixed;
    cout.precision(6);

    cout << 2 * M_PI * r << "\n";
}
