#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(10, vector<int>(1 << 10)));

    for(int i=1; i<=9; i++) dp[1][i][1 << i] = 1;

    for(int i=2; i<=N; i++)
        for(int j=0; j<=9; j++)
            for(int k=1; k<(1 << 10); k++) {
                if(j == 0) dp[i][j][k | (1 << j)] += dp[i-1][j+1][k];
                else if(j == 9) dp[i][j][k | (1 << j)] += dp[i-1][j-1][k];
                else dp[i][j][k | (1 << j)] += dp[i-1][j-1][k] + dp[i-1][j+1][k];

                dp[i][j][k | (1 << j)] %= (int)(1e9);
            }

    int ans = 0;

    for(int i=0; i<=9; i++) ans += dp[N][i][(1 << 10) - 1];

    ans %= (int)(1e9);

    cout << ans << "\n";
}
