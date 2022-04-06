#include<stdio.h>

int main() {
    int L, a, b, c, d, max;
    scanf("%d %d %d %d %d", &L, &a, &b, &c, &d);
    max = ((a-1)/c+1)>((b-1)/d+1)?((a-1)/c+1):((b-1)/d+1);
    printf("%d", L-max);
}
