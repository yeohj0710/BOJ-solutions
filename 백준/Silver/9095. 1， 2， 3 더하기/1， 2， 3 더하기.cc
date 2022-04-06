#include<stdio.h>

int main() {
    int dp[100] = {0, 1, 2, 4}, T, digit;
    for(int i=4; i<=100; i++) dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &digit);
        printf("%d\n", dp[digit]);
    }
}
