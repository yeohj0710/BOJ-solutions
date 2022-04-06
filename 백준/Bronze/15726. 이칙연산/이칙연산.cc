#include<stdio.h>

int main() {
    double a, b, c, ans1, ans2;
    scanf("%lf %lf %lf", &a, &b, &c);
    ans1 = a*b/c;
    ans2 = a/b*c;
    if(ans1 > ans2) printf("%d", (int)ans1);
    else printf("%d", (int)ans2);
}
