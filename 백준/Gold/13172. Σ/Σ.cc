#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0, mod = 1e9 + 7;

    while(N--) {
        int a, b; cin >> b >> a;

        int mul = a, ba = b, ex = mod - 2;

        while(ex > 0) {
            if(ex % 2 == 1) mul = (mul * ba) % mod;

            ba = (ba * ba) % mod;
            ex /= 2;
        }

        ans = (ans + mul) % mod;
    }

    cout << ans << "\n";
}
