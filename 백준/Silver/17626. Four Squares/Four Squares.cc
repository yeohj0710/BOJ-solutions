#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[50001]; memset(dp, 10000, sizeof(dp));

    dp[0] = 0; dp[1] = 1; dp[2] = 2; dp[3] = 3; dp[4] = 1;

    for(int i=5; i<=N; i++)
        for(int j=1; j*j<=i; j++) dp[i] = min(dp[i], dp[i-j*j] + 1);

    cout << dp[N] << "\n";
}
