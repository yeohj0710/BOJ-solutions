#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == -1) break;

        vector<vector<int>> v(N, vector<int>(N));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                char c; cin >> c;

                v[i][j] = c - '0';
            }

        vector<vector<int>> dp(N, vector<int>(N));
        dp[0][0] = 1;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(v[i][j] == 0) continue;

                if(i + v[i][j] < N) dp[i + v[i][j]][j] += dp[i][j];
                if(j + v[i][j] < N) dp[i][j + v[i][j]] += dp[i][j];
            }

        cout << dp[N-1][N-1] << "\n";
    }
}
