#include <iostream>
using namespace std;

int main() {
    double a, b, ans = 100000000;
    int n;
    scanf("%lf %lf", &a, &b);
    if(1000/b*a < ans) ans = 1000/b*a;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%lf %lf", &a, &b);
        if(1000/b*a < ans) ans = 1000/b*a;
    }
    printf("%.3lf", ans);
}
