#include<stdio.h>

int abs_sub(int a, int b) {
    int max, min;
    if(a > b) max = a, min = b;
    else max = b, min = a;
    return max - min;
}

int main() {
    int a, b, c, d, e, f, dis1, dis2, disx, disy;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    dis2 = abs_sub(c, e) + abs_sub(d, f);
    disx = abs_sub(a, e), disy = abs_sub(b, f);
    if(disx > disy) dis1 = disy + (disx - disy);
    else dis1 = disx + (disy - disx);
    if(dis1 < dis2) printf("bessie");
    else if(dis1 > dis2) printf("daisy");
    else printf("tie");
}
