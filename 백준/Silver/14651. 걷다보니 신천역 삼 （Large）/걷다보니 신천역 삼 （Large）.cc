#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[33334][3] = {{}, {0, 1, 1}};
    int mod = 1e9 + 9;

    for(int i=2; i<=33333; i++) {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % mod;
        dp[i][1] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % mod;
        dp[i][2] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % mod;
    }

    int N; cin >> N;

    cout << dp[N][0] << "\n";
}
