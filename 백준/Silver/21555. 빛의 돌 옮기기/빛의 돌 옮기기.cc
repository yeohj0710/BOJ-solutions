#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    vector<vector<int>> dp(N, vector<int>(2));
    dp[0][0] = v[0], dp[0][1] = u[0];

    for(int i=1; i<N; i++) {
        dp[i][0] = min(dp[i-1][0], dp[i-1][1] + M) + v[i];
        dp[i][1] = min(dp[i-1][1], dp[i-1][0] + M) + u[i];
    }

    int ans = min(dp[N-1][0], dp[N-1][1]);

    cout << ans << "\n";
}
