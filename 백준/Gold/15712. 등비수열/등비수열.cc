#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, r, N, mod;

int fpow(int ba, int ex) {
    int val = 1;

    while(ex > 0) {
        if(ex % 2 == 1) val = (val * ba) % mod;

        ba = (ba * ba) % mod;
        ex /= 2;
    }

    return val;
}

int f(int ba, int ex) {
    if(ex == 1) return ba;

    if(ex % 2 == 0) {
        int a = f(ba, ex/2);
        int b = fpow(ba, ex/2);

        return (a * (b + 1)) % mod;
    }

    if(ex % 2 == 1) {
        int a = f(ba, ex-1);
        int b = fpow(ba, ex);

        return (a + b) % mod;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> a >> r >> N >> mod;

    if(N == 1) {
        cout << a % mod << "\n";

        return 0;
    }

    int ans = f(r % mod, N-1);

    ans = ((ans + 1) * a) % mod;

    cout << ans << "\n";
}
