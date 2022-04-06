#include<stdio.h>

int main() {
    int T, a1, a2, b1, b2, c1, c2, d1, d2, attack;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d %d %d %d %d %d %d", &a1, &b1, &c1, &d1, &a2, &b2, &c2, &d2);
        a1 += a2, b1 += b2, c1 += c2, d1 += d2;
        if(a1 < 1) a1 = 1;
        if(b1 < 1) b1 = 1;
        if(c1 < 0) c1 = 0;
        printf("%d\n", a1 + 5*b1 + 2*c1 + 2*d1);
    }
}
