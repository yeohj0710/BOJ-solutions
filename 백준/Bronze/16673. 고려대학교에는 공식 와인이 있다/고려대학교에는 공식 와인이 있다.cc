#include <cstdio>
using namespace std;

int main() {
    int c, k, p, sum = 0;
    scanf("%d %d %d", &c, &k, &p);
    for(int i=1; i<=c; i++) sum += (k*i + p*i*i);
    printf("%d", sum);
}
