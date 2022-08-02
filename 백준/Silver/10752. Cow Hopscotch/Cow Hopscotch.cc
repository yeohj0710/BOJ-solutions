#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            char c; cin >> c;

            if(c == 'R') v[i][j] = 1;
            else if(c == 'B') v[i][j] = 2;
        }

    vector<vector<int>> dp(N, vector<int>(M));
    dp[0][0] = 1;

    for(int i=1; i<N; i++)
        for(int j=1; j<M; j++)
            for(int k=0; k<i; k++)
                for(int l=0; l<j; l++)
                    if(v[k][l] != v[i][j]) dp[i][j] += dp[k][l];

    cout << dp[N-1][M-1] << "\n";
}
