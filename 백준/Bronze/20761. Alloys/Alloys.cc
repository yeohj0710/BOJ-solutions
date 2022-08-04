#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x; cin >> x;

    x = min(x, 1.0);

    cout << fixed;
    cout.precision(6);

    cout << pow(x/2, 2) << "\n";
}
