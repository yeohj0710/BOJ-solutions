#include<stdio.h>

int main() {
    int a, b, c, d, e, f, sum1 = 0, sum2 = 0;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(a+b+c > sum1) sum1 = a+b+c;
    if(a+b+d > sum1) sum1 = a+b+d;
    if(a+c+d > sum1) sum1 = a+c+d;
    if(b+c+d > sum1) sum1 = b+c+d;
    if(e > f) sum2 = e;
    else sum2 = f;
    printf("%d", sum1 + sum2);
}
