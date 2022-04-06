#include <cstdio>
using namespace std;

int main() {
    int a, x, b, y, T;
    scanf("%d %d %d %d %d", &a, &x, &b, &y, &T);
    if(T <= 30) printf("%d ", a);
    else printf("%d ", a+(T-30)*x*21);
    if(T <= 45) printf("%d ", b);
    else printf("%d ", b+(T-45)*y*21);
}
