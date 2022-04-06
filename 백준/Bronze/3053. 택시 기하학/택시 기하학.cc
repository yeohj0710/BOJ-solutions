#include<stdio.h>

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.6lf\n%.6lf", 3.1415926535897932384626*r*r, 2*r*r);
}
