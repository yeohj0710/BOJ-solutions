#include<stdio.h>

int main() {
    int a, b, temp, max = 1;
    scanf("%d %d", &a, &b);
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    for(int i=2; i<=a; i++) if(a%i == 0 && b%i == 0) max = i;
    printf("%d\n%d", max, a*b/max);
}
