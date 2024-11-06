#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    int ans = 0;

    while(n--) {
        int x; cin >> x;

        ans += (m / x) * (k / m) + (k % m) / x;
    }

    cout << ans << "\n";
}
