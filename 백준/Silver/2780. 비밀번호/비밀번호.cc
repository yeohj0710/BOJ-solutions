#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[1001][10] = {{}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    for(int i=2; i<=1000; i++) {
        vector<int> v(10);

        v[0] = dp[i-1][7];
        v[1] = dp[i-1][2] + dp[i-1][4];
        v[2] = dp[i-1][1] + dp[i-1][3] + dp[i-1][5];
        v[3] = dp[i-1][2] + dp[i-1][6];
        v[4] = dp[i-1][1] + dp[i-1][5] + dp[i-1][7];
        v[5] = dp[i-1][2] + dp[i-1][4] + dp[i-1][6] + dp[i-1][8];
        v[6] = dp[i-1][3] + dp[i-1][5] + dp[i-1][9];
        v[7] = dp[i-1][0] + dp[i-1][4] + dp[i-1][8];
        v[8] = dp[i-1][5] + dp[i-1][7] + dp[i-1][9];
        v[9] = dp[i-1][6] + dp[i-1][8];

        for(int j=0; j<10; j++) dp[i][j] = v[j] % 1234567;
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int ans = 0;
        for(int i=0; i<10; i++) ans = (ans + dp[N][i]) % 1234567;

        cout << ans << "\n";
    }
}
