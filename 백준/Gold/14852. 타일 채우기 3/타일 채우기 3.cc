#include<bits/stdc++.h>
#define MAX 1000001
#define MOD 1000000007
using namespace std;

long long dp[MAX], sum[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    dp[0] = 1, dp[1] = 2, dp[2] = 7;
    sum[0] = 1, sum[1] = 3, sum[2] = 10;

    for(int i=3; i<=N; i++) {
        dp[i] = (dp[i] + dp[i-1]*2 + dp[i-2]*3 + sum[i-3]*2) % MOD;
        sum[i] = (dp[i] + sum[i-1]) % MOD;
    }

    cout << dp[N];
}
