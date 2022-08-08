#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<vector<bool>> v(N, vector<bool>(M));

        while(true) {
            int a, b; cin >> a >> b;
            if(a == 0 && b == 0) break;

            v[a][b] = true;
        }

        vector<vector<int>> dp(N, vector<int>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(v[i][j]) dp[i][j] = 0;
                else if(i == 0 && j == 0) dp[i][j] = 1;
                else if(i == 0) dp[i][j] = dp[i][j-1];
                else if(j == 0) dp[i][j] = dp[i-1][j];
                else dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }

        cout << "Map " << t << ": " << dp[N-1][M-1] << "\n";
    }
}
