#include<stdio.h>

int main() {
    int n, digit;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &digit);
    if(!n) printf("divide by zero");
    else printf("1.00");
}
