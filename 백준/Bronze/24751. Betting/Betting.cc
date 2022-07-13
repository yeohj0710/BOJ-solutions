#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x; cin >> x;

    cout << fixed;
    cout.precision(3);

    cout << 100.0 / x << "\n" << 100.0 / (100.0 - x) << "\n";
}
