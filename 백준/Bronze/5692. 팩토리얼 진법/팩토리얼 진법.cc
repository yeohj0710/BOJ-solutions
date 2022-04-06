#include <cstdio>
using namespace std;

int main() {
    int n, temp, fac, sum, mul;
    while(1) {
        scanf("%d", &n);
        if(!n) break;
        temp = n;
        mul = 1;
        fac = 1;
        sum = 0;
        while(temp) {
            sum += (temp%10) * mul;
            temp /= 10;
            mul *= ++fac;
        }
        printf("%d\n", sum);
    }
}
