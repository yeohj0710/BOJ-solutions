#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;
    int d, e, f; cin >> d >> e >> f;

    int ans = a + b + c + d + e + f - min(max({a, b, c}), max({d, e, f})) * 2;

    cout << ans << "\n";
}
