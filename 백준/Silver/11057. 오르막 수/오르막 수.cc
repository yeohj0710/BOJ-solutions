#include <bits/stdc++.h>
#define MOD 10007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[1001][10] = {};
    for(int i=0; i<=9; i++) dp[1][i] = 1;

    for(int i=2; i<=N; i++)
        for(int j=0; j<=9; j++)
            for(int k=0; k<=j; k++) dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;

    int ans = 0;
    for(int i=0; i<=9; i++) ans = (ans + dp[N][i]) % MOD;

    cout << ans;
}
