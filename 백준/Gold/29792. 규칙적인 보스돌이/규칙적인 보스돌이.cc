#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) cin >> u[i];

    vector<pair<int, int>> w(K+1);
    for(int i=1; i<=K; i++) cin >> w[i].first >> w[i].second;

    vector<int> vv;

    for(int k=1; k<=N; k++) {
        vector<pair<int, int>> v(K+1); // <weight, value>
        for(int i=1; i<=K; i++) {
            v[i].first = (w[i].first - 1) / u[k] + 1;
            v[i].second = w[i].second;
        }

        vector<vector<int>> dp(K+1, vector<int>(901));

        for(int i=1; i<=K; i++)
            for(int j=1; j<=900; j++) {
                dp[i][j] = dp[i-1][j];
                if(v[i].first <= j)
                    dp[i][j] = max(dp[i][j], dp[i-1][j - v[i].first] + v[i].second);
            }

        vv.push_back(dp[K][900]);
    }

    sort(vv.begin(), vv.end(), greater<int>());

    int ans = 0;

    for(int i=0; i<M; i++) ans += vv[i];

    cout << ans << "\n";
}
