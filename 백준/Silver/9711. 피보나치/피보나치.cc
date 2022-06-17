#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<int> dp(N+1);
        dp[1] = 1 % M, dp[2] = 1 % M;

        for(int i=2; i<=N; i++) dp[i] = (dp[i-1] + dp[i-2]) % M;

        cout << "Case #" << t << ": " << dp[N] << "\n";
    }
}
