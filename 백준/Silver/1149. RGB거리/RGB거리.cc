#include<stdio.h>

int min(int a, int b) { return a<b?a:b; }

int main() {
    int N, eachCost[1005][3], minCost[1005][3];
    scanf("%d", &N);
    for(int i=1; i<=N; i++) scanf("%d %d %d", &eachCost[i][0], &eachCost[i][1], &eachCost[i][2]);
    for(int i=0; i<3; i++) minCost[1][i] = eachCost[1][i];
    for(int i=2; i<=N; i++) {
        minCost[i][0] = min(minCost[i-1][1], minCost[i-1][2]) + eachCost[i][0];
        minCost[i][1] = min(minCost[i-1][2], minCost[i-1][0]) + eachCost[i][1];
        minCost[i][2] = min(minCost[i-1][0], minCost[i-1][1]) + eachCost[i][2];
    }
    printf("%d", min(min(minCost[N][0], minCost[N][1]), minCost[N][2]));
}
