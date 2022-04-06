#include <stdio.h>
int score[2][100005], max_score[2][100005] = {0, };

int max(int a, int b) { return a>b?a:b; }

int main() {
    int T, n, temp;
    scanf("%d", &T);
    for(int k=0; k<T; k++) {
        scanf("%d", &n);
        for(int i=0; i<2; i++)
            for(int j=1; j<=n; j++) scanf("%d", &score[i][j]);
        max_score[0][1] = score[0][1], max_score[1][1] = score[1][1];
        for(int i=2; i<=n; i++) {
            max_score[0][i] = max(max_score[1][i-1] + score[0][i], max(max_score[0][i-2], max_score[1][i-2]) + score[0][i]);
            max_score[1][i] = max(max_score[0][i-1] + score[1][i], max(max_score[0][i-2], max_score[1][i-2]) + score[1][i]);
        }
        printf("%d\n", max(max_score[0][n], max_score[1][n]));
    }
}
