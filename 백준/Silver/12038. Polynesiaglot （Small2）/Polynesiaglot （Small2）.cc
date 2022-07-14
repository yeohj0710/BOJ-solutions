#include <bits/stdc++.h>
#define int long long
using namespace std;

int mod = (int)(1e9 + 7);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M, K; cin >> N >> M >> K;

        int dp[K+1][2] = {{0, 0}, {N, M}, {M * N, (N + M) * M}};

        for(int i=3; i<=K; i++) {
            dp[i][0] = (dp[i-1][1] * N) % mod;
            dp[i][1] = ((dp[i-1][0] + dp[i-1][1]) * M) % mod;
        }

        cout << "Case #" << t << ": " << dp[K][1] << "\n";
    }
}
