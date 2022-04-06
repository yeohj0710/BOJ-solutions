#include<stdio.h>
#include<math.h>

int main() {
    float d, h, w;
    scanf("%f %f %f", &d, &h, &w);
    printf("%d %d", (int)(d*h/sqrt(h*h+w*w)), (int)(d*w/sqrt(h*h+w*w)));
}
