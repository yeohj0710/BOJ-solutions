#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double x; cin >> x;

    cout << fixed << setprecision(1);

    if(x <= 30) cout << x / 2 << "\n";
    else cout << (x - 30) * 3 / 2 + 15 << "\n";
}
