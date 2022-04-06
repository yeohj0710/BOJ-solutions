#include<stdio.h>
#define MAX 10000

int main() {
    int m, n, sum = 0, arr[10005] = {0, }, check = 0, min;
    scanf("%d %d", &m, &n);
    arr[1] = 1;
    for(int i=2; i*i<=MAX; i++)
        for(int j=2; i*j<=MAX; j++) arr[i*j] = 1;
    for(int i=m; i<=n; i++)
        if(!arr[i]) {
            sum += i;
            if(!check) min = i;
            check = 1;
        }
    if(!check) printf("-1");
    else printf("%d\n%d", sum, min);
}
