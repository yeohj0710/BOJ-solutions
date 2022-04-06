#include<stdio.h>

int main() {
    int n, arr[100005] = {0, }, dp[100005] = {0, }, max = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    dp[0] = max = arr[0];
    for(int i=1; i<n; i++) {
        if(dp[i-1] + arr[i] > arr[i]) dp[i] = dp[i-1] + arr[i];
        else dp[i] = arr[i];
        if(dp[i] > max) max = dp[i];
    }
    printf("%d", max);
}
