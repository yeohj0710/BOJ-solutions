#include<stdio.h>

int main() {
    int n, a, b, q[5] = {0, };
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(a == 0 || b == 0) q[0]++;
        else if(a > 0 && b > 0) q[1]++;
        else if(a < 0 && b > 0) q[2]++;
        else if(a < 0 && b < 0) q[3]++;
        else if(a > 0 && b < 0) q[4]++;
    }
    for(int i=1; i<=4; i++) printf("Q%d: %d\n", i, q[i]);
    printf("AXIS: %d", q[0]);
}
