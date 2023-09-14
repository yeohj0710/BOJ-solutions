#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int a = 1, b = 1, mod = 1e9 + 7;

    for(int i=0; i<N; i++) {
        a = (a * M) % mod;
        b = (b * (M - 1)) % mod;
    }

    int ans = a - b;

    while(ans < 0) ans += mod;

    cout << ans << "\n";
}
