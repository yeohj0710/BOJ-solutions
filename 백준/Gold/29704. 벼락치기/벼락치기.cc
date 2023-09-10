#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int sum = 0;

    vector<pair<int, int>> v(N+1); // <weight, value>
    for(int i=1; i<=N; i++) {
        cin >> v[i].first >> v[i].second;

        sum += v[i].second;
    }

    vector<vector<int>> dp(N+1, vector<int>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            dp[i][j] = dp[i-1][j];
            if(v[i].first <= j)
                dp[i][j] = max(dp[i][j], dp[i-1][j - v[i].first] + v[i].second);
        }

    cout << sum - dp[N][M] << "\n";
}
