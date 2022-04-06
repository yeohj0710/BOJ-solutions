#include<stdio.h>

int main() {
    int sum, a, b, c;
    scanf("%d %d\n%d", &a, &b, &c);
    sum = a * 60 + b + c;
    printf("%d %d", sum%(24*60)/60, sum%60);
}
