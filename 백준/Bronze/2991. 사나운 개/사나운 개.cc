#include <cstdio>
using namespace std;

int main() {
    int a, b, c, d, p, m, n, sum1 = 0, sum2 = 0, sum3 = 0;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &p, &m, &n);
    if(p%(a+b) > 0 && p%(a+b) <= a) sum1++;
    if(p%(c+d) > 0 && p%(c+d) <= c) sum1++;
    if(m%(a+b) > 0 && m%(a+b) <= a) sum2++;
    if(m%(c+d) > 0 && m%(c+d) <= c) sum2++;
    if(n%(a+b) > 0 && n%(a+b) <= a) sum3++;
    if(n%(c+d) > 0 && n%(c+d) <= c) sum3++;
    printf("%d\n%d\n%d", sum1, sum2, sum3);
}
