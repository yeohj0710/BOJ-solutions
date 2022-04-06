#include<stdio.h>

int main() {
    int T, price, a, b, c, d;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &price);
        a = price/25;
        price %= 25;
        b = price/10;
        price %= 10;
        c = price/5;
        price %= 5;
        d = price;
        printf("%d %d %d %d\n", a, b, c, d);
    }
}
