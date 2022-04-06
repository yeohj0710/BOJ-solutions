#include<stdio.h>

int main() {
    int n, arr[100] = {0, 1};
    scanf("%d", &n);
    for(int i=2; i<=n; i++) arr[i] = arr[i-1] + arr[i-2];
    printf("%d", arr[n]);
}
