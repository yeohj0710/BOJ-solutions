#include<stdio.h>

void merge(int A[], int p, int q, int r) {
    int B[100005], i = p, j = q+1, k = p;
    while(i<=q && j<=r) {
        if(A[i] <= A[j]) B[k++] = A[i++];
        else B[k++] = A[j++];
    }
    while(i<=q) B[k++] = A[i++];
    while(j<=r) B[k++] = A[j++];
    for(int a=p; a<=r; a++) A[a] = B[a];
}

void mergeSort(int A[], int p, int r) {
    int q;
    if(p < r) {
        q = (p+r)/2;
        mergeSort(A, p, q);
        mergeSort(A, q+1, r);
        merge(A, p, q, r);
    }
}

int binarySearch(int A[], int N, int key) {
    int low = 0, high = N-1, mid;
    while(low <= high) {
        mid = (low + high)/2;
        if(key == A[mid]) return 1;
        else if(key < A[mid]) high = mid - 1;
        else if(key > A[mid]) low = mid + 1;
    }
    return 0;
}

int main() {
    int N, M, A[100005], key;
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d", &A[i]);
    mergeSort(A, 0, N-1);
    scanf("%d", &M);
    for(int i=0; i<M; i++) {
        scanf("%d", &key);
        printf("%d\n", binarySearch(A, N, key));
    }
}
