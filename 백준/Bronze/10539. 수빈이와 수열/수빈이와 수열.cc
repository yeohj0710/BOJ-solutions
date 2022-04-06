#include <stdio.h>

int main() {
    long long int n, digit, sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%lld", &digit);
        printf("%lld ", digit*i-sum);
        sum += digit*i-sum;
    }
}
