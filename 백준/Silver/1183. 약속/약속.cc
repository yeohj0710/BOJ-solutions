#include<stdio.h>

int main() {
    int N, A[10001] = {0, }, S[10001] = {0, }, diff[10001] = {0, }, temp;
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d %d", &A[i], &S[i]);
    if(N%2) {
        printf("1");
        return 0;
    }
    else {
        for(int i=0; i<N; i++) diff[i] = A[i]-S[i];
        for(int i=N-1; i>0; i--)
            for(int j=0; j<i; j++)
                if(diff[j] > diff[j+1]) {
                    temp = diff[j];
                    diff[j] = diff[j+1];
                    diff[j+1] = temp;
                }
        printf("%d", diff[N/2] - diff[(N/2)-1] + 1);
    }
}
