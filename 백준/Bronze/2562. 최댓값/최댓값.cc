#include<stdio.h>

int main() {
    int max = 0, num, order;
    for(int i=0; i<9; i++) {
        scanf("%d", &num);
        if(num > max) max = num, order = i+1;
    }
    printf("%d\n%d", max, order);
}
