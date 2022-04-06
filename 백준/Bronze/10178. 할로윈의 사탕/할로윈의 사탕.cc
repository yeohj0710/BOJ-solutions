#include <stdio.h>

int main() {
    int T, a, b;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d %d", &a, &b);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", a/b, a%b);
    }
}
