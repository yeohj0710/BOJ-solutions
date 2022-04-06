#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n%10 == 0) printf("%d %d %d", n/300, n%300/60, n%300%60/10);
    else printf("-1");
}
