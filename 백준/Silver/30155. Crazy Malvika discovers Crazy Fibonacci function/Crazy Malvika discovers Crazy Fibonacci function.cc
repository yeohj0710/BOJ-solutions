#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    int mod = 1e9 + 7;

    while(T--) {
        int a, b, N; cin >> a >> b >> N;

        vector<int> v = {a, b, b-a, -a, -b, a-b};

        int ans = v[(N-1) % 6];

        while(ans < 0) ans += mod;

        cout << ans % mod << "\n";
    }
}
