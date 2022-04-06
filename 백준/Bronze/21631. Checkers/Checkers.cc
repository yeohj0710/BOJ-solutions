#include <cstdio>
using namespace std;

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(a < b) printf("%lld", a+1);
    else printf("%lld", b);
}
