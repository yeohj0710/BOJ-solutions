#include<stdio.h>

int main() {
    int n;
    long long int count[100] = {0, 1};
    scanf("%d", &n);
    for(int i=2; i<=n; i++) count[i] = count[i-1] + count[i-2];
    printf("%lld", count[n]);
}
