#include<stdio.h>

int main() {
    int a1, a2, b1, b2, c1, c2, sum1, sum2;
    scanf("%d : %d : %d\n%d : %d : %d", &a1, &b1, &c1, &a2, &b2, &c2);
    sum1 = a1*60*60 + b1*60 + c1;
    sum2 = a2*60*60 + b2*60 + c2;
    if(sum1 <= sum2) printf("%d", sum2-sum1);
    else printf("%d", 24*60*60 - (sum1-sum2));
}
