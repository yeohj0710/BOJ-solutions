#include<stdio.h>

int main() {
    int a, b, c, max_x, max_y;
    scanf("%d %d %d", &a, &b, &c);
    max_x = b>(a-b)?b:(a-b);
    max_y = c>(a-c)?c:(a-c);
    printf("%d", max_x*max_y*4);
}
