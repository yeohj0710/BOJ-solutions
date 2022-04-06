#include <iostream>
#define INF 1000001
using namespace std;

int Min(int a, int b) { return a<b?a:b; }

int main() {
    int N, cost[1005][3] = {0, }, sum[1005][3] = {0, }, ans = INF;
    cin >> N;
    for(int i=1; i<=N; i++) scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
    for(int i=0; i<3; i++) {
        sum[1][0] = sum[1][1] = sum[1][2] = INF;
        sum[1][i] = cost[1][i];
        for(int j=2; j<=N; j++) {
            sum[j][0] = Min(sum[j-1][1], sum[j-1][2]) + cost[j][0];
            sum[j][1] = Min(sum[j-1][2], sum[j-1][0]) + cost[j][1];
            sum[j][2] = Min(sum[j-1][0], sum[j-1][1]) + cost[j][2];
        }
        for(int j=0; j<3; j++)
            if(i != j && sum[N][j] < ans) ans = sum[N][j];
    }
    cout << ans;
}
