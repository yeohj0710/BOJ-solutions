#include<stdio.h>

int main() {
    int N, A[1005] = {0, }, D[1005] = {0, 1}, subSeq[1005] = {0, }, subLen = 1;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) scanf("%d", &A[i]);
    subSeq[1] = A[1];
    for(int i=2; i<=N; i++) {
        for(int j=0; j<=subLen; j++)
            if(A[i] > subSeq[j]) {
                if(j == subLen) {
                    subSeq[++subLen] = A[i];
                    D[i] = subLen;
                    break;
                }
                else if(A[i] < subSeq[j+1]) {
                    subSeq[j+1] = A[i];
                    D[i] = j+1;
                    break;
                }
            }
    }
    printf("%d", subLen);
}
