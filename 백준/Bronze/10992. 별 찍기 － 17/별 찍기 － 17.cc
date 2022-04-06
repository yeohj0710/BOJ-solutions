#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("*");
        return 0;
    }
    for(int i=1; i<n; i++) printf(" ");
    printf("*\n");
    for(int i=2; i<n; i++) {
        for(int j=n; j>i; j--) printf(" ");
        printf("*");
        for(int j=1; j<2*i-2; j++) printf(" ");
        printf("*\n");
    }
    for(int i=1; i<2*n; i++) printf("*");
}
