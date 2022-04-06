#include<stdio.h>

int main() {
    int a, b, c, d, sum, max = 0, max_num;
    for(int i=1; i<=5; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum = a+b+c+d;
        if(sum > max) {
            max = sum;
            max_num = i;
        }
    }
    printf("%d %d", max_num, max);
}
