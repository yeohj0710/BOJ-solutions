#include<stdio.h>
#include<math.h>

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double x1, y1, x2, y2, x3, y3, d1, d2, d3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    if((y2-y1)*(x3-x1) == (y3-y1)*(x2-x1)) {
        // Do not use (y2-y1)/(x2-x1) == (y3-y1)/(x3-x1)
        printf("-1.0");
        return 0;
    }
    d1 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    d2 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    d3 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    if(d3 > d2) swap(&d2, &d3);
    if(d2 > d1) swap(&d1, &d2);
    if(d3 > d2) swap(&d2, &d3);
    printf("%.10f", 2*(d1-d3));
}
