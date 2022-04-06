#include<stdio.h>

int main() {
    int sum, a, b, c, d;
    scanf("%d %d %d\n%d", &a, &b, &c, &d);
    sum = a * 60 * 60 + b * 60 + c + d;
    printf("%d %d %d", sum%(24*60*60)/(60*60), sum%(24*60*60)%(60*60)/60, sum%60);
}
