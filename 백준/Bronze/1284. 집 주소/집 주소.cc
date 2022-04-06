#include<stdio.h>

int main() {
    int a, sum;
    while(1) {
        sum = 1;
        scanf("%d", &a);
        if(a == 0) return 0;
        while(a) {
            if(a%10 == 1) sum += 3;
            else if(a%10 == 0) sum += 5;
            else sum += 4;
            a /= 10;
        }
        printf("%d\n", sum);
    }
}
