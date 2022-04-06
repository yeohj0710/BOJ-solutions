#include <cstdio>
using namespace std;

int main() {
    double a, b, c, d, Max = 0;
    int i, idx = 0;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    for(i=0; i<4; i++) {
        if(a/c + b/d > Max) Max = a/c + b/d, idx = i;
        int temp = a;
        a = c, c = d, d = b, b = temp;
    }
    printf("%d", idx);
}
