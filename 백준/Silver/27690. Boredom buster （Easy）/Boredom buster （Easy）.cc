#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> dp(1e6 + 1); dp[1] = dp[2] = 1;

    for(int i=3; i<=1e6; i++) {
        if(i % 3 == 0) dp[i] = max(dp[i], (i / 3) * (i * 2 / 3) + dp[i / 3] + dp[i * 2 / 3]);
        else if(i % 2 == 0) dp[i] = max(dp[i], (i / 2) * (i / 2) + dp[i / 2] + dp[i / 2]);
        else dp[i] = max(dp[i], (i - 1) + dp[i - 1]);
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << dp[N] << "\n";
    }
}
