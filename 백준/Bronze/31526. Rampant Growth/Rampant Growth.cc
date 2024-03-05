#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int mod = 998244353;

    int ans = a;

    for(int i=0; i<b-1; i++) ans = (ans * (a - 1)) % mod;

    cout << ans << "\n";
}
