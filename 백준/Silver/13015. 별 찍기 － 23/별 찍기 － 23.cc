#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<n; i++) {
        for(int j=1; j<i; j++) printf(" ");
        if(i != 1) {
            printf("*");
            for(int j=1; j<n-1; j++) printf(" ");
            printf("*");
        }
        else for(int j=1; j<=n; j++) printf("*");
        for(int j=1; j<2*(n-i); j++) printf(" ");
        if(i != 1) {
            printf("*");
            for(int j=1; j<n-1; j++) printf(" ");
            printf("*");
        }
        else for(int j=1; j<=n; j++) printf("*");
        printf("\n");
    }
    for(int i=1; i<n; i++) printf(" ");
    printf("*");
    for(int i=1; i<=n-2; i++) printf(" ");
    printf("*");
    for(int i=1; i<=n-2; i++) printf(" ");
    printf("*\n");
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<i; j++) printf(" ");
        if(i != 1) {
            printf("*");
            for(int j=1; j<n-1; j++) printf(" ");
            printf("*");
        }
        else for(int j=1; j<=n; j++) printf("*");
        for(int j=1; j<2*(n-i); j++) printf(" ");
        if(i != 1) {
            printf("*");
            for(int j=1; j<n-1; j++) printf(" ");
            printf("*");
        }
        else for(int j=1; j<=n; j++) printf("*");
        printf("\n");
    }
}
