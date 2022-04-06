#include<stdio.h>

int main() {
    int n, arr[1005], temp;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    for(int i=0; i<n; i++) printf("%d\n", arr[i]);
}
