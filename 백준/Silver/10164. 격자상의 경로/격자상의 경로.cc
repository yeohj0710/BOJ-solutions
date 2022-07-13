#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[31][31] = {};

    for(int i=0; i<=30; i++) dp[i][0] = 1;
    for(int i=1; i<=30; i++)
        for(int j=1; j<=15; j++) dp[i][j] = dp[i-1][j-1] + dp[i-1][j];

    int N, M, K; cin >> N >> M >> K;

    if(K == 0) {
        int ans = dp[(N-1)+(M-1)][min(N-1, M-1)];

        cout << ans << "\n";
    }
    else if(K != 0) {
        int x = (K - 1) / M + 1;
        int y = (K - 1) % M + 1;

        int ans = dp[(x-1)+(y-1)][min(x-1, y-1)] * dp[(N-x)+(M-y)][min(N-x, M-y)];

        cout << ans << "\n";
    }
}
