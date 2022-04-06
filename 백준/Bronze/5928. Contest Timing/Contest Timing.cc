#include<stdio.h>

int main() {
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = a*24*60 + b*60 + c;
    if(sum < 11*24*60 + 11*60 + 11) printf("-1");
    else printf("%d", sum - (11*24*60 + 11*60 + 11));
}
