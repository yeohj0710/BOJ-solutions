#include<stdio.h>

int main() {
    int n, temp = 1;
    scanf("%d", &n);
    for(int i=1; i<n; i++) temp *= 2;
    printf("%d", (temp*2+1)*(temp*2+1));
}
