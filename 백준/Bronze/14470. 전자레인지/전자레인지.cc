#include<stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a < 0) printf("%d", c*(-a) + d + e*b);
    else printf("%d", e*(b-a));
}
