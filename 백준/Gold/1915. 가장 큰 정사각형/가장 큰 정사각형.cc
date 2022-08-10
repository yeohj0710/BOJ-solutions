#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<vector<int>> dp(N, vector<int>(M));

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(i == 0 || j == 0) dp[i][j] = v[i][j] - '0';
            else if(v[i][j] == '1')
                dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) + v[i][j] - '0';

            ans = max(ans, dp[i][j] * dp[i][j]);
        }

    cout << ans << "\n";
}
