#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<=i; j++) cin >> v[i][j];

    vector<vector<int>> dp(N, vector<int>(N));
    dp[0][0] = v[0][0];

    for(int i=1; i<N; i++)
        for(int j=0; j<N; j++) {
            if(j == 0) dp[i][j] = dp[i-1][j] + v[i][j];
            else if(j == N-1) dp[i][j] = dp[i-1][j-1] + v[i][j];
            else dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + v[i][j];
        }

    int ans = 0;
    for(int i=0; i<N; i++) ans = max(ans, dp[N-1][i]);

    cout << ans << "\n";
}
