#include <cstdio>
using namespace std;

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i*j == n) sum += i;
        }
    }
    printf("%d", sum*5-24);
}
