#include<stdio.h>

int num[105][15] = {0, }, sum = 0;

int main() {
    int N;
    scanf("%d", &N);
    for(int i=1; i<=9; i++) num[1][i] = 1;
    for(int i=2; i<=N; i++) {
        num[i][0] = num[i-1][1];
        for(int j=1; j<9; j++) num[i][j] = (num[i-1][j-1] + num[i-1][j+1])%1000000000;
        num[i][9] = num[i-1][8];
    }
    for(int i=0; i<=9; i++) sum = (sum + num[N][i])%1000000000;
    printf("%d", sum);
}
