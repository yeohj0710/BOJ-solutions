#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) printf("%lld", a-b);
    else printf("%lld", b-a);
}
