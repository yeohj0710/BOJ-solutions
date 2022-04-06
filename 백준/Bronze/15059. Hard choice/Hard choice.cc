#include<stdio.h>

int main() {
    int a1, a2, b1, b2, c1, c2, a = 0, b = 0, c = 0;
    scanf("%d %d %d\n%d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);
    if(a1 < a2) a = a2 - a1;
    if(b1 < b2) b = b2 - b1;
    if(c1 < c2) c = c2 - c1;
    printf("%d", a+b+c);
}
