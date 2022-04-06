#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.7lf", a+b-sqrt(a*a+b*b));
}
