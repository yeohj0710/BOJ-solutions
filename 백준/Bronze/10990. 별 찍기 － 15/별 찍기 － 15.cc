#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<n+i; j++) {
            if(j == n-i+1) printf("*");
            else if(j == n+i-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
