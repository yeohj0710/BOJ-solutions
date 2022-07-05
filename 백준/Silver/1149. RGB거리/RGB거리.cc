#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int v[1001][3] = {};
    for(int i=1; i<=N; i++)
        for(int j=0; j<3; j++) cin >> v[i][j];

    int dp[1001][3] = {};
    for(int i=0; i<3; i++) dp[1][i] = v[1][i];

    for(int i=2; i<=1000; i++) {
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + v[i][0];
        dp[i][1] = min(dp[i-1][2], dp[i-1][0]) + v[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + v[i][2];
    }

    int ans = INT_MAX;
    for(int i=0; i<3; i++)
        ans = min(ans, dp[N][i]);

    cout << ans << "\n";
}
