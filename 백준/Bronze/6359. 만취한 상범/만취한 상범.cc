#include <stdio.h>
#include <string.h>

int main() {
    int T, n, j;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        for(j=1; j*j<=n; j++) ;
        printf("%d\n", j-1);
    }
}
