#include<stdio.h>

int main() {
    int a1, b1, c1, a2, b2, c2;
    scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
    if(b1 < b2 || (b1 == b2 && c1 <= c2)) printf("%d\n", a2-a1);
    else printf("%d\n", a2-a1-1);
    printf("%d\n%d", a2-a1+1, a2-a1);
}
