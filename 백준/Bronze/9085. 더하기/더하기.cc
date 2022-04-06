#include<stdio.h>

int main() {
    int T, n, sum, digit;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        sum = 0;
        for(int j=0; j<n; j++) {
            scanf("%d", &digit);
            sum += digit;
        }
        printf("%d\n", sum);
    }
}
