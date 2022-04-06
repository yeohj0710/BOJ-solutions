#include<stdio.h>

int main() {
    int a, b, c, d, sum = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a+b+c+d;
    printf("%d\n%d", sum/60, sum%60);
}
