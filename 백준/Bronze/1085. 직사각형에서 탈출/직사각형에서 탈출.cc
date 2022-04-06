#include<stdio.h>

int main() {
    int x, y, w, h, d;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    d = x;
    if(w-x < d) d = w-x;
    if(y < d) d = y;
    if(h-y < d) d= h-y;
    printf("%d", d);
}
