#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    M = min(M, N - M);

    int ans = 1, mod = 1e9 + 7;

    for(int i=N; i>=N-M+1; i--) ans = (ans * i) % mod;

    for(int i=1; i<=M; i++) {
        int ba = i, ex = mod - 2;

        while(ex > 0) {
            if(ex % 2 == 1) ans = (ans * ba) % mod;

            ba = (ba * ba) % mod;
            ex /= 2;
        }
    }

    cout << ans << "\n";
}
