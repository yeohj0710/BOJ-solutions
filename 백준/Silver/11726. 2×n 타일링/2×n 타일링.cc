#include<stdio.h>

int main() {
    int n, arr[1005] = {0, 1, 2};
    scanf("%d", &n);
    for(int i=3; i<=n; i++) arr[i] = (arr[i-1] + arr[i-2])%10007;
    printf("%d", arr[n]);
}
