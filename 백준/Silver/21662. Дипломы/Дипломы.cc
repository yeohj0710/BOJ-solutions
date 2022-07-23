#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    __int128 l = 1, r = 1e14, ans = 1e14;

    while(l <= r) {
        __int128 m = (l + r)/2;

        if((m / N) * (m / M) >= K) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    int rans = ans;

    cout << rans << "\n";
}
