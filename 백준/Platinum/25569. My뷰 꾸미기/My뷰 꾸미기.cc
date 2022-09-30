#include <bits/stdc++.h>
#define int long long
using namespace std;

int mod = 1e9 + 7;
vector<int> fac(6e5 + 1);

int fp(int ba, int ex) {
    int ret = 1;

    while(ex > 0) {
        if(ex % 2 == 1) ret = (ret * ba) % mod;

        ba = (ba * ba) % mod;
        ex /= 2;
    }

    return ret;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    fac[0] = 1;

    for(int i=1; i<=6e5; i++) fac[i] = (fac[i-1] * i) % mod;

    int N; cin >> N;

    int ans = 1;

    while(N--) {
        int a, b; cin >> a >> b;

        int c = min(a, b);

        int tmp = (fac[a+b] * fp(fac[c], mod - 2)) % mod;

        tmp = (tmp * fp(fac[a+b-c], mod - 2)) % mod;

        tmp = (tmp - 1 + mod) % mod;

        ans = (ans * tmp) % mod;
    }

    cout << ans << "\n";
}
