#include<stdio.h>

int main() {
    int n, a, b, c, d, e, count = 0;
    scanf("%d", &n);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(n == a) count++;
    if(n == b) count++;
    if(n == c) count++;
    if(n == d) count++;
    if(n == e) count++;
    printf("%d", count);
}
