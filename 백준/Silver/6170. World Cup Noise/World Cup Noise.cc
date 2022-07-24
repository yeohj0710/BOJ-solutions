#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[50][2] = {{}, {1, 1}};

    for(int i=2; i<45; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        cout << "Scenario #" << t << ":\n";
        cout << dp[N][0] + dp[N][1] << "\n";
        cout << "\n";
    }
}
