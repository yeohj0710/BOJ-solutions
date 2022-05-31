#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N+1); // <weight, value>
    for(int i=1; i<=N; i++)
        cin >> v[i].first >> v[i].second;

    dp.resize(N+1, vector<int>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            dp[i][j] = dp[i-1][j];
            if(v[i].first <= j)
                dp[i][j] = max(dp[i][j], dp[i-1][j - v[i].first] + v[i].second);
        }

    cout << dp[N][M] << "\n";
}
