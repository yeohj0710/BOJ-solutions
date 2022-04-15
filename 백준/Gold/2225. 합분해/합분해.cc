#include<bits/stdc++.h>
#define MAX 401
#define MOD 1000000000
using namespace std;

int combination(int N, int K) {
    if(N < K) return 0;

    int dp[MAX][MAX] = {1};

    for(int i=1; i<=N; i++)
        for(int j=0; j<=i; j++)
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD;

    return dp[N][K];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    cout << combination(N+K-1, K-1);
}
