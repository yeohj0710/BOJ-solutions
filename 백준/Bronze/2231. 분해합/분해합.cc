#include<stdio.h>

int arr[1000005] = {0, };

int main() {
    int n, j, sum;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum = j = i;
        while(j) {
            sum += j%10;
            j /= 10;
        }
        if(arr[sum] == 0 || sum < arr[sum]) arr[sum] = i;
    }
    printf("%d", arr[n]);
}
