#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num%10 == 0) printf("%d", num/100 + num%100);
    else printf("%d", num/10 + num%10);
}
