#include<stdio.h>

int main() {
    int n, a, count = 0;
    scanf("%d", &n);
    for(int i=0; i<5; i++) {
        scanf("%d", &a);
        if(n == a) count++;
    }
    printf("%d", count);
}
