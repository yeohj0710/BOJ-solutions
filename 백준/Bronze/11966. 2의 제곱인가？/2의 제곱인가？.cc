#include <stdio.h>

int main() {
    long long int n, val = 1, i = 0, check = 0;
    scanf("%lld", &n);
    while(i <= 30) {
        if(val == n) check = 1;
        val *= 2;
        i++;
    }
    printf("%d", check);
}
