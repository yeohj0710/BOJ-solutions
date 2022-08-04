#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> dp(N+1, vector<int>(N+1));

    int mod = (int)(1e9 + 3);

    for(int i=0; i<=N; i++) dp[i][0] = 1;
    dp[1][1] = 1;

    for(int i=2; i<=N; i++)
        for(int j=1; j<=N; j++)
            dp[i][j] = (dp[i-1][j] + dp[i-2][j-1]) % mod;

    int ans = (dp[N-1][M] + dp[N-3][M-1]) % mod;

    cout << ans << "\n";
}
