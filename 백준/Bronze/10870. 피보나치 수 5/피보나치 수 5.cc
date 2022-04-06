#include<stdio.h>

int main() {
    int num[500], n;
    num[0] = 0, num[1] = 1;
    scanf("%d", &n);
    for(int i=2; i<=n; i++) num[i] = num[i-1] + num[i-2];
    printf("%d", num[n]);
}
