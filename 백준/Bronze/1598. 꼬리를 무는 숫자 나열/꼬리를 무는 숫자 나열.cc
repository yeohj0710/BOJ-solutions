#include<stdio.h>

int main() {
    int a, b, a_x, a_y, b_x, b_y, dis = 0;
    scanf("%d %d", &a, &b);
    a_x = (a+3)/4;
    a_y = (a-1)%4;
    b_x = (b+3)/4;
    b_y = (b-1)%4;
    if(a_x > b_x) dis += (a_x - b_x);
    else dis += (b_x - a_x);
    if(a_y > b_y) dis += (a_y - b_y);
    else dis += (b_y - a_y);
    printf("%d", dis);
}
