#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[101][2] = {{0, 0}, {0, 0}, {1, 0}, {0, 1}, {2, 0}};

    for(int i=5; i<=N; i++) {
        int a = dp[i-2][0] + dp[i-2][1];
        int b = dp[i-3][0] + dp[i-3][1];

        if(a < b) {
            dp[i][0] = dp[i-2][0] + 1;
            dp[i][1] = dp[i-2][1];
        }
        else {
            dp[i][0] = dp[i-3][0];
            dp[i][1] = dp[i-3][1] + 1;
        }
    }

    cout << dp[N][0] << " " << dp[N][1] << "\n";
}
