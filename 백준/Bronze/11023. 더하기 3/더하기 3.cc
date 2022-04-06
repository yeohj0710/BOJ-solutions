#include <cstdio>
using namespace std;

int main() {
    int n, sum = 0;
    while(scanf("%d", &n) != EOF) sum += n;
    printf("%d", sum);
}
