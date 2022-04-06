#include<stdio.h>

int main() {
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);
    max = b>c?b:c;
    min = b<c?b:c;
    printf("%d", min + (a-max));
}
