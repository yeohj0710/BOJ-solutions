#include <bits/stdc++.h>
using namespace std;

int dp[101][10001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int memory[101], cost[101], sum = 0;
    for(int i=1; i<=N; i++) cin >> memory[i];
    for(int i=1; i<=N; i++) {
        cin >> cost[i];
        sum += cost[i];
    }

    for(int i=1; i<=N; i++)
        for(int j=0; j<=sum; j++) {
            if(cost[i] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-cost[i]] + memory[i]);
        }

    for(int i=0; i<=sum; i++)
        if(dp[N][i] >= M) {
            cout << i;
            break;
        }
}
