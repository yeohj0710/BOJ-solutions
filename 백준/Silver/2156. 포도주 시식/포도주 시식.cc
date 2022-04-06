#include<stdio.h>

int wine[10005] = {0, }, maxWine[10005] = {0, };

int max(int a, int b, int c) { return (a>b?a:b)>c?(a>b?a:b):c; }

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &wine[i]);
    maxWine[1] = wine[1], maxWine[2] = wine[1] + wine[2];
    for(int i=3; i<=n; i++) maxWine[i] = max(maxWine[i-1], maxWine[i-2] + wine[i], maxWine[i-3] + wine[i-1] + wine[i]);
    printf("%d", maxWine[n]);
}
