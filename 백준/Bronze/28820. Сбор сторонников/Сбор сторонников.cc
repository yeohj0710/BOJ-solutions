#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int x = 1;

    while(n--) {
        int y; cin >> y;

        int gcd = __gcd(x, y);

        x = (x * y) / gcd;
    }

    int ans = ((m - 1) + x) % 7 + 1;

    cout << ans << "\n";
}
