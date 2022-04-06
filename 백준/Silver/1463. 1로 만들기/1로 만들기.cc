#include<stdio.h>

int arr[1000005];
int main() {
    int N;
    scanf("%d", &N);
    arr[1] = 0;
    for(int i=2; i<=N; i++) {
        arr[i] = arr[i-1] + 1;
        if(i%2 == 0 && arr[i] > arr[i/2] + 1) arr[i] = arr[i/2] + 1;
        if(i%3 == 0 && arr[i] > arr[i/3] + 1) arr[i] = arr[i/3] + 1;
    }
    printf("%d", arr[N]);
}
