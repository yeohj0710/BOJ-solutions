#include<stdio.h>

int main() {
    int cur = 0, a, b, count, max = 0;
    for(int i=0; i<4; i++) {
        scanf("%d %d", &a, &b);
        cur = cur-a+b;
        if(cur > max) max = cur;
    }
    printf("%d", max);
}
