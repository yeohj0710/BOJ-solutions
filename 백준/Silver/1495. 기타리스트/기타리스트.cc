#include <bits/stdc++.h>
#define int long long
using namespace std;

// referred to the solution for study

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, S, M; cin >> N >> S >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<vector<bool>> dp(N+1, vector<bool>(M+1));
    dp[0][S] = true;

    for(int i=1; i<=N; i++)
        for(int j=0; j<=M; j++) {
            if(dp[i-1][j] && j + v[i] <= M) dp[i][j + v[i]] = true;
            if(dp[i-1][j] && j - v[i] >= 0) dp[i][j - v[i]] = true;
        }

    int ans = -1;

    for(int i=0; i<=M; i++)
        if(dp[N][i]) ans = max(ans, i);

    cout << ans << "\n";
}
