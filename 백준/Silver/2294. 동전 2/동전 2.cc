#include<bits/stdc++.h>
#define INF 1000000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> coin(N);
    for(int i=0; i<N; i++) cin >> coin[i];

    vector<int> dp(K+1, INF);
    dp[0] = 0;

    for(int i=0; i<N; i++)
        for(int j=coin[i]; j<=K; j++)
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);

    if(dp[K] == INF) cout << "-1";
    else cout << dp[K];
}
