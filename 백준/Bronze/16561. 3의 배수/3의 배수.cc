#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    n /= 3;
    printf("%d", (n-1)*(n-2)/2);
}
