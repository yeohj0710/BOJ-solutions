#include <cstdio>
using namespace std;

int main() {
    double a, b;
    scanf("%lf", &a);
    while(1) {
        scanf("%lf", &b);
        if(b == 999) break;
        printf("%.2lf\n", b-a);
        a = b;
    }
}
