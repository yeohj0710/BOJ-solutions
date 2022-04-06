#include<stdio.h>

int main() {
    int a, b, c, min = 1000000;
    scanf("%d %d %d", &a, &b, &c);
    if(2*b+4*c < min) min = 2*b+4*c;
    if(2*b+4*a < min) min = 2*b+4*a;
    if(2*a+2*c < min) min = 2*a+2*c;
    printf("%d", min);
}
