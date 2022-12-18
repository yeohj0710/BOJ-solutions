#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<pair<int, int>> v(N+1); // <weight, value>
        for(int i=1; i<=N; i++)
            cin >> v[i].second >> v[i].first;

        vector<vector<int>> dp(N+1, vector<int>(M+1));

        for(int i=1; i<=N; i++)
            for(int j=1; j<=M; j++) {
                dp[i][j] = dp[i-1][j];
                if(v[i].first <= j)
                    dp[i][j] = max(dp[i][j], dp[i-1][j - v[i].first] + v[i].second);
            }

        cout << dp[N][M] << "\n";
    }
}
