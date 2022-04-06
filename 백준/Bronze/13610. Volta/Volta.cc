#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (b-1)/(b-a)+1);
}
