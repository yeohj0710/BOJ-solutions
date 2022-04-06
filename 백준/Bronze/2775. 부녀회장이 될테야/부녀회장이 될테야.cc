#include<stdio.h>

int main() {
    int num[15][15] = {0, }, sum, k, n, T;
    for(int i=1; i<15; i++) num[0][i] = i;
    for(int i=1; i<15; i++)
        for(int j=1; j<15; j++) {
            sum = 0;
            for(int k=1; k<=j; k++) sum += num[i-1][k];
            num[i][j] = sum;
        }
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d", &k, &n);
        printf("%d\n", num[k][n]);
    }
}
