#include<stdio.h>
#include<string.h>

int N, arr[100005], arrCopy[100005];
char name[100005][105], nameCopy[100005][105];

void merge(int left, int mid, int right) {
    int i = left, j = mid+1, k = left;
    while(i<=mid && j<=right) {
        if(arr[i] <= arr[j]) arrCopy[k] = arr[i], strcpy(nameCopy[k++], name[i++]);
        else arrCopy[k] = arr[j], strcpy(nameCopy[k++], name[j++]);
    }
    while(i<=mid) arrCopy[k] = arr[i], strcpy(nameCopy[k++], name[i++]);
    while(j<=right) arrCopy[k] = arr[j], strcpy(nameCopy[k++], name[j++]);
    for(int a=left; a<=right; a++) arr[a] = arrCopy[a], strcpy(name[a], nameCopy[a]);
}

void mergeSort(int left, int right) {
    int mid;
    if(left < right) {
        mid = (left+right)/2;
        mergeSort(left, mid);
        mergeSort(mid+1, right);
        merge(left, mid, right);
    }
}

int main() {
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d %s", &arr[i], name[i]);
    mergeSort(0, N-1);
    for(int i=0; i<N; i++) printf("%d %s\n", arr[i], name[i]);
}
