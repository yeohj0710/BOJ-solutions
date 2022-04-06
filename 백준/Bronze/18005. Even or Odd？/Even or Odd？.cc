#include<stdio.h>

int main() {
    long long int n;
    scanf("%d", &n);
    if(n%2) printf("0");
    else if(n%4 == 0) printf("2");
    else printf("1");
}
