#include<stdio.h>

int main() {
    double d1, d2;
    scanf("%lf %lf", &d1, &d2);
    printf("%.6lf", 2*d1 + 3.141592*d2*2);
}
