#include<stdio.h>

int main() {
    int a, min = 100, sum = 0;
    for(int i=0; i<7; i++) {
        scanf("%d", &a);
        if(a%2 && a < min) min = a;
        if(a%2) sum += a;
    }
    if(!sum) printf("-1");
    else printf("%d\n%d", sum, min);
}
