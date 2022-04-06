#include<stdio.h>

int main() {
    int a, b, c, d, p, sum = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &p);
    if(p <= c) sum = b;
    else sum = b + (p-c)*d;
    if(a*p < sum) printf("%d", a*p);
    else printf("%d", sum);
}
