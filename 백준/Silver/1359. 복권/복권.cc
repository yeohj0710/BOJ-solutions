#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[1001][1001] = {};
int mod = INT_MAX;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(9);

    for(int i=0; i<=1e3; i++) dp[i][0] = 1;
    for(int i=1; i<=1e3; i++)
        for(int j=1; j<=1e3; j++) dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;

    int N, M, K; cin >> N >> M >> K;

    double ans = 0;

    for(int i=K; i<=M; i++) {
        ans += (double)(dp[M][i] * dp[N-M][M-i]) / dp[N][M];
    }

    cout << ans << "\n";
}
