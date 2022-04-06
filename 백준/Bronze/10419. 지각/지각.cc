#include <cstdio>
using namespace std;

int main() {
    int T, j, n;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        for(j=0; j<=1000; j++) {
            if(j+j*j > n) break;
        }
        printf("%d\n", j-1);
    }
}
