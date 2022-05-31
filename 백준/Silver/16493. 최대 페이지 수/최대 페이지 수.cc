#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> dp;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    dp.resize(M+1, vector<int>(N+1));

    vector<pair<int, int>> v(M+1);
    for(int i=1; i<=M; i++) cin >> v[i].first >> v[i].second;

    for(int i=1; i<=M; i++)
        for(int j=1; j<=N; j++) {
            dp[i][j] = dp[i-1][j];
            if(v[i].first <= j)
                dp[i][j] = max(dp[i][j], dp[i-1][j-v[i].first] + v[i].second);
        }

    cout << dp[M][N] << "\n";
}
