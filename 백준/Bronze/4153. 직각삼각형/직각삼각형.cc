#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(!a && !b && !c) return 0;
        if(b > c) swap(&b, &c);
        if(a > b) swap(&a, &b);
        if(b > c) swap(&b, &c);
        if(a*a + b*b == c*c) printf("right\n");
        else printf("wrong\n");
    }
}
