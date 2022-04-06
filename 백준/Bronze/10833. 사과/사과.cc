#include<stdio.h>

int main() {
    int n, a, b, sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        sum += b-a*(b/a);
    }
    printf("%d", sum);
}
