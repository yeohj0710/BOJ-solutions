#include<stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", ((a-1)/c + 1)*((b-1)/c + 1));
}
