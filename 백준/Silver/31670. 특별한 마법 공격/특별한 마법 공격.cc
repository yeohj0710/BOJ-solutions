#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<vector<int>> dp(N, vector<int>(2));

    dp[0][0] = 0, dp[0][1] = v[0];

    for(int i=1; i<N; i++) {
        dp[i][0] = dp[i-1][1];
        dp[i][1] = min(dp[i-1][0], dp[i][0]) + v[i];
    }

    cout << min(dp[N-1][0], dp[N-1][1]) << "\n";
}
