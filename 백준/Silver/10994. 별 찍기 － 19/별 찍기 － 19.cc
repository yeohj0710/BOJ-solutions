#include<stdio.h>

int main() {
    int n, star[500][500] = {0, };
    scanf("%d", &n);
    n = n*2 - 1;
    for(int i=0; i<n; i+=2)
        for(int j=n-i; j<=n+i; j++) {
            star[n-i][j] = 1;
            star[n+i][j] = 1;
            star[j][n-i] = 1;
            star[j][n+i] = 1;
        }
    for(int i=1; i<2*n; i++) {
        for(int j=1; j<2*n; j++) {
            if(star[i][j]) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
