#include<stdio.h>

int main() {
    int a, b, c, d, e, f, sum1, sum2, h, m, s;
    for(int i=0; i<3; i++) {
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        sum1 = a*60*60 + b*60 + c;
        sum2 = d*60*60 + e*60 + f;
        h = (sum2-sum1)/3600;
        m = (sum2-sum1)%3600/60;
        s = (sum2-sum1)%60;
        printf("%d %d %d\n", h, m, s);
    }
}
