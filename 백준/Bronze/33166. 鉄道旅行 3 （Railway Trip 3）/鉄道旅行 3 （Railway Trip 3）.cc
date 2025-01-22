#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int p, q, a, b; cin >> p >> q >> a >> b;

    int ans = 0;

    if(p >= q) ans = q * a;
    else ans = p * a + (q - p) * b;

    cout << ans << "\n";
}
