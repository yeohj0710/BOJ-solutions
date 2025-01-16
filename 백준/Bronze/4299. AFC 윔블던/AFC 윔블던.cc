#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a-b < 0) printf("-1");
    else if((a+b)%2 == 0) printf("\%d %d", (a+b)/2, (a-b)/2);
    else printf("-1");
}
