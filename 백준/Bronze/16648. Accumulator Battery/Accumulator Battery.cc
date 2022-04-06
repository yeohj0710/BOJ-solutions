#include<stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    if(b >= 20) printf("%.5lf", a*(b+20)/(100-b));
    else printf("%.5lf", a*b*2/(80+2*(20-b)));
}
