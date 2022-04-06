#include<stdio.h>

int reverse(int n) {
    return (n%10)*100 + (n/10%10)*10 + n/100;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", reverse(a)>reverse(b)?reverse(a):reverse(b));
}
