#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int ans = 1, mod = 1e9 + 7;

    a %= mod;

    while(b > 0) {
        if(b % 2 == 1) ans = (ans * a) % mod;

        a = (a * a) % mod;
        b /= 2;
    }

    cout << ans << "\n";
}
