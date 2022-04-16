#include <bits/stdc++.h>
#define MAX 16
#define INF 20000000
using namespace std;

int N;
int cost[MAX][MAX], dp[MAX][1 << MAX];

int DP(int curr, int status) {
    if(status == (1 << N) - 1) {
        if(cost[curr][0] == 0) return INF;
        return cost[curr][0];
    }

    if(dp[curr][status] != -1) return dp[curr][status];

    dp[curr][status] = INF;
    for(int next=0; next<N; next++) {
        if(cost[curr][next] == 0) continue;
        if((status & (1 << next)) == (1 << next)) continue;

        dp[curr][status] = min(dp[curr][status], cost[curr][next] + DP(next, status | (1 << next)));
    }

    return dp[curr][status];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for(int i=0; i<N; i++)
        for(int j=0; j<(1<<N); j++) dp[i][j] = -1;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> cost[i][j];

    cout << DP(0, 1) << "\n";
}
