#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double x; cin >> x;

    cout << fixed << setprecision(6);

    cout << (3.785411784 * 1e5) / (x * 1609.344) << "\n";
}
