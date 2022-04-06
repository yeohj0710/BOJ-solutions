#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; ; i++)
        if(n <= 6*i*(i-1)/2 + 1) {
            printf("%d", i);
            return 0;
        }
}
