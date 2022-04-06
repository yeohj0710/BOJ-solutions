#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=n; j>i; j--) printf(" ");
        for(int j=1; j<2*i; j++) {
            if(j%2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
