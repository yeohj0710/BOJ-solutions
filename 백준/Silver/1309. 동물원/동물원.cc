#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;
const int MOD = 9901;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[MAX][2];
    // dp[i][0] : number of cases that 0 lion in the "i"th square
    // dp[i][1] : number of cases that 1 lion in the "i"th square

    dp[1][0] = 1, dp[1][1] = 2;

    for(int i=2; i<=N; i++) {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
        dp[i][1] = (dp[i-1][0]*2 + dp[i-1][1]) % MOD;
    }

    cout << (dp[N][0] + dp[N][1]) % MOD << "\n";
}
