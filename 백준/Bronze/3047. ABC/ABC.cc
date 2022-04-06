#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c, temp;
    char order[5];
    scanf("%d %d %d", &a, &b, &c);
    scanf("%s", order);
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(!strcmp(order, "ABC")) printf("%d %d %d", a, b, c);
    if(!strcmp(order, "ACB")) printf("%d %d %d", a, c, b);
    if(!strcmp(order, "BAC")) printf("%d %d %d", b, a, c);
    if(!strcmp(order, "BCA")) printf("%d %d %d", b, c, a);
    if(!strcmp(order, "CAB")) printf("%d %d %d", c, a, b);
    if(!strcmp(order, "CBA")) printf("%d %d %d", c, b, a);
}
