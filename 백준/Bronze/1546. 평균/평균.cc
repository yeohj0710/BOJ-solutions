#include<stdio.h>

int main() {
    int n, score, max = 0, sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &score);
        sum += score;
        if(score > max) max = score;
    }
    printf("%f", (float)sum*100/(max*n));
}
