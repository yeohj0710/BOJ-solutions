#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    int ans = 1, mod = 1e9 + 7;

    for(int i=1; i<=N; i++) ans = (ans * i) % mod;

    cout << ans << "\n";
}
