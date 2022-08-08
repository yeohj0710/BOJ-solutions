#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> dp(N+1, vector<int>(10));

    for(int i=1; i<=9; i++) dp[1][i] = 1;

    for(int i=2; i<=N; i++) {
        dp[i][1] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3];
        dp[i][2] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3] + dp[i-1][4];

        for(int j=3; j<=7; j++)
            dp[i][j] = dp[i-1][j-2] + dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1] + dp[i-1][j+2];

        dp[i][8] = dp[i-1][6] + dp[i-1][7] + dp[i-1][8] + dp[i-1][9];
        dp[i][9] = dp[i-1][7] + dp[i-1][8] + dp[i-1][9];

        for(int j=1; j<=9; j++) dp[i][j] %= 987654321;
    }

    int ans = 0;

    for(int i=1; i<=9; i++) ans += dp[N][i];

    ans %= 987654321;

    cout << ans << "\n";
}
