#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a < b && b < c && c < d) printf("Fish Rising");
    else if(a > b && b > c && c > d) printf("Fish Diving");
    else if(a == b && b == c && c == d) printf("Fish At Constant Depth");
    else printf("No Fish");
}
