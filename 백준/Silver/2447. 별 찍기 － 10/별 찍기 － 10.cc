#include<stdio.h>

int main() {
    int n, check, temp;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            check = temp = 3;
            while(temp <= n) {
                if(i%temp > temp/3 && i%temp <= temp/3*2 && j%temp > temp/3 && j%temp <= temp/3*2) check = 0;
                temp *= 3;
            }
            if(check) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
