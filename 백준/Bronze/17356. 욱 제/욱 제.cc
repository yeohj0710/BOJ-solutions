#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b; cin >> a >> b;

    cout << fixed;
    cout.precision(4);

    cout << 1.0 / (1.0 + pow(10, (b - a)/400)) << "\n";
}
