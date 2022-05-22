#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N >= 0) {
        vector<int> dp(N+1);
        dp[0] = 0, dp[1] = 1;

        for(int i=2; i<=N; i++) dp[i] = (dp[i-1] + dp[i-2]) % (int)1e9;

        if(dp[N] > 0) cout << 1 << "\n";
        else if(dp[N] < 0) cout << -1 << "\n";
        else cout << 0 << "\n";

        cout << abs(dp[N]) << "\n";
    }
    else {
        N = abs(N);

        vector<int> dp(N+1);
        dp[0] = 0, dp[1] = 1;

        for(int i=2; i<=N; i++) dp[i] = (-dp[i-1] + dp[i-2]) % (int)1e9;

        if(dp[N] > 0) cout << 1 << "\n";
        else if(dp[N] < 0) cout << -1 << "\n";
        else cout << 0 << "\n";

        cout << abs(dp[N]) << "\n";
    }
}
