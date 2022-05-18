#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = (int)(1e9 + 7);
const int MAX = 101;

int dp[MAX][MAX][MAX] = {}; // dp[N][L][R]

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, L, R; cin >> N >> L >> R;

    dp[1][1][1] = 1;
    for(int i=2; i<=N; i++)
        for(int j=1; j<=L; j++)
            for(int k=1; k<=R; k++)
                dp[i][j][k] = (dp[i-1][j][k]*(i-2) + dp[i-1][j-1][k] + dp[i-1][j][k-1]) % mod;

    cout << dp[N][L][R] << "\n";
}
