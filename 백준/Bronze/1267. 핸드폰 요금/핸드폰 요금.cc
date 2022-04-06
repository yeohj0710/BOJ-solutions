#include<stdio.h>

int main() {
    int n, t, sum_y = 0, sum_m = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &t);
        sum_y += (t/30 + 1) * 10;
        sum_m += (t/60 + 1) * 15;
    }
    if(sum_y < sum_m) printf("Y %d", sum_y);
    else if(sum_y > sum_m) printf("M %d", sum_m);
    else printf("Y M %d", sum_y);
}
