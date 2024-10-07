#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    int ans = c * b;

    if(a - c > 0) ans += b;

    cout << ans << "\n";
}
