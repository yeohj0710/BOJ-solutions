#include <cstdio>
using namespace std;

int main() {
    int a, b, c, x, y;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
    if(x >= y && a >= c*2) printf("%d", 2*c*x);
    else if(x <= y && b >= c*2) printf("%d", 2*c*y);
    else if(a+b <= c*2) printf("%d", a*x + b*y);
    else {
        if(x <= y) printf("%d", 2*c*x + b*(y-x));
        else printf("%d", 2*c*y + a*(x-y));
    }
}
