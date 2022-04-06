#include<stdio.h>

int main() {
    int n, a, b, c, d, sum1, sum2;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    sum1 = ((n-1)/a + 1)*b;
    sum2 = ((n-1)/c + 1)*d;
    if(sum1 < sum2) printf("%d", sum1);
    else printf("%d", sum2);
}
