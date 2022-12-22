#include<stdio.h>

int main() {
    int N, X, digit;
    scanf("%d %d", &N, &X);
    for(int i=0; i<N; i++) {
        scanf("%d", &digit);
        if(digit < X) printf("%d ", digit);
    }
}
