#include<stdio.h>

int main() {
    int N, digit, sum = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%1d", &digit);
        sum += digit;
    }
    printf("%d", sum);
}
