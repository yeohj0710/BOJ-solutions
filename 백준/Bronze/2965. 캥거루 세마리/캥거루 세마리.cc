#include<stdio.h>

int main() {
    int a, b, c, max = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(b-a > max) max = b-a;
    if(c-b > max) max = c-b;
    printf("%d", max-1);
}
