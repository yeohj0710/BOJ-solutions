#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c ,&d);
    if((a == 8 || a == 9) && (d == 8 || d == 9) && (b == c)) printf("ignore");
    else printf("answer");
}
