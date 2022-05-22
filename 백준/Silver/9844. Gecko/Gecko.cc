#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M)), dp(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    if(M == 1) {
        int ans = 0;
        for(int i=0; i<N; i++) ans += v[i][0];
        cout << ans << "\n";
        return 0;
    }

    for(int i=0; i<M; i++) dp[0][i] = v[0][i];

    for(int i=1; i<N; i++)
        for(int j=0; j<M; j++) {
            if(j == 0) dp[i][j] = v[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
            else if(j == M-1) dp[i][j] = v[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
            else dp[i][j] = v[i][j] + max(max(dp[i-1][j-1], dp[i-1][j]), dp[i-1][j+1]);
        }

    int ans = dp[N-1][0];
    for(int i=1; i<M; i++) ans = max(ans, dp[N-1][i]);

    cout << ans << "\n";
}
