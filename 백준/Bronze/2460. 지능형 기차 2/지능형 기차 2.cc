#include<stdio.h>

int main() {
    int sum = 0, a, b, max = 0;
    for(int i=0; i<10; i++) {
        scanf("%d %d", &a, &b);
        sum = sum-a+b;
        if(sum > max) max = sum;
    }
    printf("%d", max);
}
