#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0, mod = 1e9 + 7, mul = 1;

    for(int i=0; i<N; i++) {
        ans = (ans + (v[i] % mod) * mul) % mod;
        mul = (mul * 2) % mod;
    }

    cout << ans << "\n";
}
