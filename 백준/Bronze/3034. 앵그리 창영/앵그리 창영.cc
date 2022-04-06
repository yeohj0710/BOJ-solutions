#include<stdio.h>

int main() {
    int n, a, b, l;
    scanf("%d %d %d", &n, &a, &b);
    for(int i=0; i<n; i++) {
        scanf("%d", &l);
        if(l*l <= a*a + b*b) printf("DA\n");
        else printf("NE\n");
    }
}
