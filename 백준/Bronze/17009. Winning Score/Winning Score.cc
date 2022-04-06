#include<stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if(a*3 + b*2 + c > d*3 + e*2 + f) printf("A");
    else if(a*3 + b*2 + c < d*3 + e*2 + f) printf("B");
    else printf("T");
}
