#include<stdio.h>

int A[1000005] = {0, }, D[1000005] = {0, 1}, subSeq[1000005] = {-1000000001, };

int main() {
    int N, subLen = 1, low, mid, high;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) scanf("%d", &A[i]);
    subSeq[1] = A[1];
    for(int i=2; i<=N; i++) {
        low = 0, high = subLen;
        while(low <= high) {
            mid = (low + high)/2;
            if(A[i] > subSeq[mid] && mid == subLen) {
                subSeq[++subLen] = A[i];
                D[i] = subLen;
                break;
            }
            else if(A[i] > subSeq[mid] && A[i] < subSeq[mid+1]) {
                subSeq[mid+1] = A[i];
                D[i] = mid+1;
                break;
            }
            else if(A[i] < subSeq[mid]) high = mid - 1;
            else if(A[i] > subSeq[mid]) low = mid + 1;
            else break;
        }
    }
    printf("%d", subLen);
}
