#include<stdio.h>

int main() {
    int score1 = 100, score2 = 100, n, a, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(a > b) score2 -= a;
        else if(a < b) score1 -= b;
    }
    printf("%d\n%d", score1, score2);
}
