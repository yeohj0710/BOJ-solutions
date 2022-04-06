#include<stdio.h>

int main() {
    long long int n;
    int arr[10] = {0, };
    scanf("%d", &n);
    while(n) {
        arr[n%10]++;
        n /= 10;
    }
    for(int i=9; i>=0; i--)
        while(arr[i]--) printf("%d", i);
}
