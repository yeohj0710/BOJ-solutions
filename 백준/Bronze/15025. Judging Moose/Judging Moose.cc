#include<stdio.h>

int main() {
    int a, b, max;
    scanf("%d %d", &a, &b);
    if(!a && !b) printf("Not a moose");
    else if(a == b) printf("Even %d", a+b);
    else printf("Odd %d", 2*(a>b?a:b));
}
