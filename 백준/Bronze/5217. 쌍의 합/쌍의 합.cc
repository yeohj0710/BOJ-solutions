#include <cstdio>
using namespace std;

int main() {
    int T, n;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        printf("Pairs for %d:", n);
        for(int j=1; j<(n+1)/2; j++) {
            printf(" %d %d", j, n-j);
            if(n-j-j > 2) printf(",");
        }
        printf("\n");
    }
}
