#include<stdio.h>

int main() {
    int a, b, c, d, e, min = 10000, min2 = 10000;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a < min) min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min2) min2 = d;
    if(e < min2) min2 = e;
    printf("%d", min+min2-50);
}
