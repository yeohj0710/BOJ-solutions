#include<stdio.h>

int main() {
    int N, A[51] = {0, }, temp;
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d", &A[i]);
    for(int i=N-1; i>0; i--)
        for(int j=0; j<i; j++)
            if(A[j]>A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
    printf("%lld", A[0]*A[N-1]);
}
