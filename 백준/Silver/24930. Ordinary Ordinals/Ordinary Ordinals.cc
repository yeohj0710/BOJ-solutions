#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, mod; cin >> N >> mod;

    if(N == 0) {
        cout << 2 % mod << "\n";
        return 0;
    }
    else if(N == 1) {
        cout << 4 % mod << "\n";
        return 0;
    }

    int ans = 1, a = 2;

    N -= 2;

    while(N > 0) {
        if(N % 2 == 1) ans = (ans * a) % mod;

        a = (a * a) % mod;
        N /= 2;
    }

    ans = (ans * 10 - 1) % mod;

    cout << ans << "\n";
}
