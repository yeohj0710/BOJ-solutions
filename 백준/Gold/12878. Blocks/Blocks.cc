#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int mod = 1e4 + 7;

    int a = 1, ba = 2, ex = N-1;

    while(ex > 0) {
        if(ex % 2 == 1) a = (a * ba) % mod;

        ba = (ba * ba) % mod;
        ex /= 2;
    }

    int b = 1; ba = 2, ex = 2*(N-1);

    while(ex > 0) {
        if(ex % 2 == 1) b = (b * ba) % mod;

        ba = (ba * ba) % mod;
        ex /= 2;
    }

    int ans = (a + b) % mod;

    cout << ans << "\n";
}
