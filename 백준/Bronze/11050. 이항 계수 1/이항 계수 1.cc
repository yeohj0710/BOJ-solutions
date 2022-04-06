#include<stdio.h>

int main() {
    int N, K, ans = 1;
    scanf("%d %d", &N, &K);
    for(int i=N; i>N-K; i--) ans *= i;
    for(int i=K; i>=1; i--) ans /= i;
    printf("%d", ans);
}
