#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, N; cin >> a >> b >> N;

    int ans = 1, mod = 1e9 + 7;

    int x = 1;

    for(int i=1; i<=31; i++) x = (x * 2) % mod;

    N--;

    while(N > 0) {
        if(N % 2 == 1) ans = (ans * x) % mod;

        x = (x * x) % mod;
        N /= 2;
    }

    cout << ans << "\n";
}
