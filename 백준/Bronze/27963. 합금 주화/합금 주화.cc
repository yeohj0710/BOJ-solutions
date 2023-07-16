#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    cout << fixed << setprecision(8);

    double d1, d2, x; cin >> d1 >> d2 >> x;

    if(d1 < d2) swap(d1, d2);

    cout << 100 * d1 * d2 / (d2 * x + d1 * (100 - x)) << "\n";
}
