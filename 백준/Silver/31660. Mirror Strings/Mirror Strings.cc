#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(1e6 + 1), u(1e6 + 1);
    v[0] = u[0] = 1;

    int mod = 1e9 + 7;

    for(int i=1; i<=1e6; i++) {
        if(i % 2 == 0) {
            v[i] = v[i-1];
            u[i] = u[i-1];
            continue;
        }

        v[i] = (v[i-1] * 5) % mod;
        u[i] = (u[i-1] * 2) % mod;
    }

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=a; i<=b; i++)
        ans = (ans + v[i] + u[i]) % mod;

    cout << ans << "\n";
}
