#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[46][2] = {{}, {0, 1}, {1, 0}};

    for(int i=3; i<=45; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << dp[N][0] + dp[N][1] << "\n";
    }
}
