#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=1; ; i++) if(i*(i+1)/2 >= n) break;
    n = n - i*(i-1)/2;
    if(i%2) printf("%d/%d", i-n+1, n);
    else printf("%d/%d", n, i-n+1);
}
