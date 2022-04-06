#include<stdio.h>

int main() {
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
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
    if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d", a, b, c);
}
