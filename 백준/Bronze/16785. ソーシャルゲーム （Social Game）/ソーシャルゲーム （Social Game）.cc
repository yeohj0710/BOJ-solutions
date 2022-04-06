#include<stdio.h>

int main() {
    int a, b, c, sum = 0, i = 0;
    scanf("%d %d %d", &a, &b, &c);
    while(sum < c) {
        i++;
        sum += a;
        if(i%7 == 0) sum += b;
    }
    printf("%d", i);
}
