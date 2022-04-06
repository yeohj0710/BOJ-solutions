#include<stdio.h>

int main() {
    int T, digit, min, sum;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        min = 100;
        sum = 0;
        for(int j=0; j<7; j++) {
            scanf("%d", &digit);
            if(digit%2 == 0) {
                sum += digit;
                if(digit < min) min = digit;
            }
        }
        printf("%d %d\n", sum, min);
    }
}
