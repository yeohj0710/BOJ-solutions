#include <stdio.h>
int sum[1030][1030] = {0, };

int main() {
    int n, m, digit, a1, a2, b1, b2;
    scanf("%d %d", &n, &m);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) {
            scanf("%d", &digit);
            sum[i][j] = -sum[i-1][j-1] + sum[i-1][j] + sum[i][j-1] + digit;
        }
    for(int i=0; i<m; i++) {
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
        printf("%d\n", -sum[a1-1][b2] - sum[a2][b1-1] + sum[a1-1][b1-1] + sum[a2][b2]);
    }
}
