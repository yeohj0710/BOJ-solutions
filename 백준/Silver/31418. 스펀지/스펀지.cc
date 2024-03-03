#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K, L; cin >> N >> M >> K >> L;

    int ans = 1, mod = 998244353;

    while(K--) {
        int x, y; cin >> x >> y;

        int val = (min(x + L, N) - max(x - L, (int)1) + 1) * (min(y + L, M) - max(y - L, (int)1) + 1);

        ans = (ans * (val % mod)) % mod;
    }

    cout << ans << "\n";
}
