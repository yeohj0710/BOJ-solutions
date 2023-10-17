#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K, L; cin >> N >> M >> K >> L;

    int ans = 0;

    while(N > 0) {
        int x = min(N, M);

        ans += x * max(L, (int)0);
        L -= K;
        N -= M;
    }

    cout << ans << "\n";
}
