#include<stdio.h>

int main() {
    double a, b, temp;
    scanf("%lf %lf", &a, &b);
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if(a >= b*3) printf("%.4lf", b);
    else if(a/3 >= b/2) printf("%.4lf", a/3);
    else printf("%.4lf", b/2);
}
