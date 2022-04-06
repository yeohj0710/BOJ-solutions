#include<stdio.h>

int main() {
    int T, n, arr[1005], sum, count;
    float average;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        sum = 0, count = 0;
        scanf("%d", &n);
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        average = (float)sum/n;
        for(int j=0; j<n; j++) if(arr[j] > average) count++;
        printf("%.3f%%\n", (float)count/n * 100);
    }
}
