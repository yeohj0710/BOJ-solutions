#include<stdio.h>

int main() {
    int T, sum1, sum2, a, b;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        sum1 = 0, sum2 = 0;
        for(int j=0; j<9; j++) {
            scanf("%d %d", &a, &b);
            sum1 += a, sum2 += b;
        }
        if(sum1 > sum2) printf("Yonsei\n");
        else if(sum1 < sum2) printf("Korea\n");
        else printf("Draw\n");
    }
}
