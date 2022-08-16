#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    N--;

    int ans = 1, x = 2, mod = 1e9 + 7;

    while(N > 0) {
        if(N % 2 == 1) ans = (ans * x) % mod;

        x = (x * x) % mod;
        N /= 2;
    }

    cout << ans << "\n";
}
