#include<stdio.h>

int main() {
    int n, count[1001] = {0, 1, 3};
    scanf("%d", &n);
    for(int i=3; i<=n; i++) count[i] = (count[i-1] + count[i-2]*2)%10007;
    printf("%d", count[n]);
}
