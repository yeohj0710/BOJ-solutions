#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[5001] = {-1, -1, -1, 1, -1, 1};

    for(int i=6; i<=N; i++) {
        if(dp[i-3] != -1 && dp[i-5] != -1)
            dp[i] = min(dp[i-3], dp[i-5]) + 1;
        else if(dp[i-3] != -1) dp[i] = dp[i-3] + 1;
        else if(dp[i-5] != -1) dp[i] = dp[i-5] + 1;
        else dp[i] = -1;
    }

    cout << dp[N] << "\n";
}
