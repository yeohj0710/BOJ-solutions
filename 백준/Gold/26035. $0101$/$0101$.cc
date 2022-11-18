#include <bits/stdc++.h>
#define int long long
using namespace std;

int mod = 1e9 + 7;

int f(int ba, int ex) {
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

    int N, M; cin >> N >> M;

    int ans = (f(2, N) + f(2, M) - 2) % mod;

    cout << ans << "\n";
}
