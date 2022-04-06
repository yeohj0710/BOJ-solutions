#include<stdio.h>

int main() {
    int n, a, b, c, award, max = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == b && b == c) award = 10000 + a*1000;
        else if(a == b) award = 1000 + a*100;
        else if(b == c) award = 1000 + b*100;
        else if(c == a) award = 1000 + c*100;
        else if(a >= b && a >= c) award = a*100;
        else if(b >= a && b >= c) award = b*100;
        else if(c >= a && c >= b) award = c*100;
        if(award > max) max = award;
    }
    printf("%d", max);
}
