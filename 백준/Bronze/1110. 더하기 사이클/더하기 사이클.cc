#include<stdio.h>

int main() {
    int n, m, i=0;
    scanf("%d", &n);
    m = n;
    while(1) {
        m = m%10*10 + (m/10 + m%10)%10;
        i++;
        if(m == n) break;
    }
    printf("%d", i);
}
