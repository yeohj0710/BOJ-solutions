#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0, mod = 1e9 + 7;

    while(N--) {
        int b; cin >> b;

        int mul = 1, a = 2;

        while(b > 0) {
            if(b % 2 == 1) mul = (mul * a) % mod;

            a = (a * a) % mod;
            b /= 2;
        }

        ans = (ans + mul) % mod;
    }

    cout << ans << "\n";
}
