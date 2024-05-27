#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 1, ba = 2, ex = n-1, mod = 1e9 + 7;

    while(ex > 0) {
        if(ex % 2 == 1) ans = (ans * ba) % mod;

        ba = (ba * ba) % mod;
        ex /= 2;
    }

    cout << ans << "\n";
}
