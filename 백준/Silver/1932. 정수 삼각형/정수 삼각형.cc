#include<stdio.h>

int triangle[505][505] = {0, }, maxSum[505][505] = {0, }, maxVal = 0;

int max(int a, int b) { return a>b?a:b; }

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++) {
            scanf("%d", &triangle[i][j]);
            maxSum[i][j] = max(maxSum[i-1][j-1], maxSum[i-1][j]) + triangle[i][j];
            if(maxSum[i][j] > maxVal) maxVal = maxSum[i][j];
        }
    printf("%d", maxVal);
}
