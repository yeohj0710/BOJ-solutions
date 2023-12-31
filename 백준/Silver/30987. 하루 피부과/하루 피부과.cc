#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x1, x2; cin >> x1 >> x2;

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    int ans = a / 3 * (x2 * x2 * x2 - x1 * x1 * x1) + (b - d) / 2 * (x2 * x2 - x1 * x1) + (c - e) * (x2 - x1);

    cout << ans << "\n";
}
