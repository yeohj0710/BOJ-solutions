#include<stdio.h>

int main() {
    int N, digit, max = -1000000, min = 1000000;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d", &digit);
        if(digit > max) max = digit;
        if(digit < min) min = digit;
    }
    printf("%d %d", min, max);
}
