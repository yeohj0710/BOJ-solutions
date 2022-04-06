#include<stdio.h>

int N, arr[1000005], arrCopy[1000005];

void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid+1, k = left;
    while(i<=mid && j<=right) {
        if(arr[i] <= arr[j]) arrCopy[k++] = arr[i++];
        else arrCopy[k++] = arr[j++];
    }
    while(i<=mid) arrCopy[k++] = arr[i++];
    while(j<=right) arrCopy[k++] = arr[j++];
    for(int a=left; a<=right; a++) arr[a] = arrCopy[a];
}

void mergeSort(int arr[], int left, int right) {
    int mid;
    if(left < right) {
        mid = (left+right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    mergeSort(arr, 0, N-1);
    for(int i=0; i<N; i++) printf("%d\n", arr[i]);
}
