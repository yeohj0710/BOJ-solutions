#include<stdio.h>

int main() {
    int n;
    long long int ans = 1;
    scanf("%d", &n);
    for(int i=n; i>=1; i--) ans *= i;
    printf("%d", ans);
}
