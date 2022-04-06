#include<stdio.h>

int main() {
    int T, n, sum, a;
    float avg, b;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        sum = 0, avg = 0;
        for(int j=0; j<n; j++) {
            scanf("%d %f", &a, &b);
            sum += a;
            avg += a*b;
        }
        printf("%d %.1f\n", sum, avg/sum);
    }
}
