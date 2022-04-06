#include<stdio.h>

int main() {
    int T;
    double price;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%lf", &price);
        printf("$%.2lf\n", price*0.8);
    }
}
