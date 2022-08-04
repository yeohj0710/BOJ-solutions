#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> dp(1001);
    dp[1] = dp[M] = 1;

    int ans = 0;

    for(int i=1; i<=N; i++) {
        if(i-2 > 0) dp[i] += dp[i-2];
        if(i-(M+1) > 0) dp[i] += dp[i-(M+1)];

        ans += dp[i];
    }

    cout << ans << "\n";
}
