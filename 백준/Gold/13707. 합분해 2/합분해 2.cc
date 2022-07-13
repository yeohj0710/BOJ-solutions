#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[10001][5001] = {};
int mod = (int)(1e9);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=0; i<=N+M-1; i++) dp[i][0] = 1;
    for(int i=1; i<=N+M-1; i++)
        for(int j=1; j<=M-1; j++) dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;

    cout << dp[N+M-1][M-1] << "\n";
}
