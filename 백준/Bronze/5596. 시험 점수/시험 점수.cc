#include<stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, sum1 = 0, sum2 = 0;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
    sum1 = a+b+c+d;
    sum2 = e+f+g+h;
    if(sum1 > sum2) printf("%d", sum1);
    else printf("%d", sum2);
}
