#include<stdio.h>
#include<string.h>

void f(long long int n) {
    if(n > 1) f(n/2);
    printf("%d", n%2);
}

int main() {
    char b1[35], b2[35];
    long long int n1 = 0, n2 = 0, mul1 = 1, mul2 = 1, sum, sum_bi;
    scanf("%s\n%s", b1, b2);
    for(int i=strlen(b1)-1; i>=0; i--) {
        n1 += (b1[i]-'0')*mul1;
        mul1 *= 2;
    }
    for(int i=strlen(b2)-1; i>=0; i--) {
        n2 += (b2[i]-'0')*mul2;
        mul2 *= 2;
    }
    sum = n1 * n2;
    f(sum);
}
