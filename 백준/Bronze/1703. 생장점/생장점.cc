#include<stdio.h>

int main() {
    int n, a, b, node;
    while(1) {
        node = 1;
        scanf("%d", &n);
        if(!n) return 0;
        for(int i=0; i<n; i++) {
            scanf(" %d %d", &a, &b);
            node = node*a - b;
        }
        printf("%d\n", node);
    }
}
