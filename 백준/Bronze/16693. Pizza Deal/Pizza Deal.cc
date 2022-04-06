#include<stdio.h>

int main() {
    double a, b, c, d, val1, val2;
    scanf("%lf %lf\n%lf %lf", &a, &b, &c, &d);
    val1 = a*d;
    val2 = 3.141592653589*c*c*b;
    if(val1 > val2) printf("Slice of pizza");
    else printf("Whole pizza");
}
