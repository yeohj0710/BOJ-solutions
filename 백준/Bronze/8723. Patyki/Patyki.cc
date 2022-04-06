#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) printf("2");
    else if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) printf("1");
    else printf("0");
}
