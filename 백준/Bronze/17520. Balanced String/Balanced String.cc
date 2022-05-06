#include <bits/stdc++.h>
using namespace std;

const int MOD = 16769023;

int dp[100001][2] = {{0, 0}, {1, 1}}; // dp[i][j] : number of string length 'i' which end with 'j'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=2; i<=N; i++) {
        if(i % 2 == 1) {
            dp[i][0] = dp[i-1][0] + dp[i-1][1];
            dp[i][1] = dp[i-1][0] + dp[i-1][1];
        }
        else {
            dp[i][0] = dp[i-1][1];
            dp[i][1] = dp[i-1][0];
        }

        dp[i][0] = dp[i][0] % MOD;
        dp[i][1] = dp[i][1] % MOD;
    }

    cout << (dp[N][0] + dp[N][1]) % MOD << "\n";
}
