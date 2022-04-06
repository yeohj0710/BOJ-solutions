#include<stdio.h>

int start[100005], end[100005];

void merge(int left, int mid, int right) {
    int startCopy[100005], endCopy[100005], i = left, j = mid+1, k = left;
    while(i<=mid && j<=right) {
        if(end[i] < end[j] || (end[i] == end[j] && start[i] < start[j])) endCopy[k] = end[i], startCopy[k++] = start[i++];
        else endCopy[k] = end[j], startCopy[k++] = start[j++];
    }
    while(i<=mid) endCopy[k] = end[i], startCopy[k++] = start[i++];
    while(j<=right) endCopy[k] = end[j], startCopy[k++] = start[j++];
    for(int a=left; a<=right; a++) end[a] = endCopy[a], start[a] = startCopy[a];
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
    int N, temp, curTime = 0, count = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d %d", &start[i], &end[i]);
    mergeSort(0, N-1);
    for(int i=0; i<N; i++) {
        if(start[i] >= curTime) {
            curTime = end[i];
            count++;
        }
    }
    printf("%d", count);
}
