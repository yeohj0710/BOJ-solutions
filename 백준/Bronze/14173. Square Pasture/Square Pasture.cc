#include<stdio.h>

int main() {
    int x, y, x_min = 1000, y_min = 1000, x_max = -1000, y_max = -1000, max;
    for(int i=0; i<4; i++) {
        scanf("%d %d", &x, &y);
        if(x > x_max) x_max = x;
        if(x < x_min) x_min = x;
        if(y > y_max) y_max = y;
        if(y < y_min) y_min = y;
    }
    if(x_max-x_min > y_max-y_min) max = x_max-x_min;
    else max = y_max-y_min;
    printf("%d", max*max);
}
