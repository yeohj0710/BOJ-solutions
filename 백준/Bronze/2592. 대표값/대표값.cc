#include <stdio.h>

int main() {
    int arr[10], avg = 0, check[1005] = {0, }, maxi = 0, max_idx;
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
        avg += arr[i];
        check[arr[i]]++;
    }
    for(int i=10; i<=1000; i+=10)
        if(check[i] > maxi) maxi = check[i];
    for(int i=10; i<=1000; i+=10)
        if(check[i] == maxi) max_idx = i;
    printf("%d\n%d", avg/10, max_idx);
}
