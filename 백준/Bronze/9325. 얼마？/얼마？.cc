#include<stdio.h>

int main() {
    int T, s, n, p, q;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d\n%d", &s, &n);
        for(int j=0; j<n; j++) {
            scanf("%d %d", &p, &q);
            s += p*q;
        }
        printf("%d\n", s);
    }
}
