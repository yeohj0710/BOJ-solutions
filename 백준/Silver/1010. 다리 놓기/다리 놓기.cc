#include<stdio.h>

int main() {
    int T, N, M, A;
    long long int ans;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        ans = 1;
        scanf("%d %d", &N, &M);
        A = N > (M-N) ? N : (M-N);
        for(int j=A+1; j<=M; j++) ans *= j;
        for(int j=1; j<=(M-A); j++) ans /= j;
        printf("%d\n", ans);
    }
}
