#include<stdio.h>

int N, x[100005], xCopy[100005], y[100005], yCopy[100005];

void merge(int left, int mid, int right) {
    int i = left, j = mid+1, k = left;
    while(i<=mid && j<=right) {
        if(x[i] < x[j] || (x[i] == x[j] && y[i] < y[j])) xCopy[k] = x[i], yCopy[k++] = y[i++];
        else xCopy[k] = x[j], yCopy[k++] = y[j++];
    }
    while(i<=mid) xCopy[k] = x[i], yCopy[k++] = y[i++];
    while(j<=right) xCopy[k] = x[j], yCopy[k++] = y[j++];
    for(int a=left; a<=right; a++) x[a] = xCopy[a], y[a] = yCopy[a];
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
    for(int i=0; i<N; i++) scanf("%d %d", &x[i], &y[i]);
    mergeSort(0, N-1);
    for(int i=0; i<N; i++) printf("%d %d\n", x[i], y[i]);
}
