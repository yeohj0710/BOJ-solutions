#include<stdio.h>

int main() {
    int T, n;
    long long int arr[105];
    arr[1] = 1, arr[2] = 1, arr[3] = 1, arr[4] = 2, arr[5] = 2;
    for(int i=6; i<=100; i++) arr[i] = arr[i-1] + arr[i-5];
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        printf("%lld\n", arr[n]);
    }
}
