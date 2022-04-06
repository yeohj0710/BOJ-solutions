#include<stdio.h>

int main() {
    int a, b, c, min = 100;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c >= 100) printf("OK");
    else {
        if(a < min) min = a;
        if(b < min) min = b;
        if(c < min) min = c;
        if(a == min) printf("Soongsil");
        else if(b == min) printf("Korea");
        else printf("Hanyang");
    }
}
