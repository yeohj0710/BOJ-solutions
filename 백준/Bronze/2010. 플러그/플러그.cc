#include<stdio.h>

int main() {
    int n, sum = 0, digit;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &digit);
        sum += digit;
    }
    printf("%d", sum-n+1);
}
