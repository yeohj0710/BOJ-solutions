#include<stdio.h>

int main() {
    int P[1001], N, temp, sum = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d", &P[i]);
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(P[i] > P[j]) {
                temp = P[i];
                P[i] = P[j];
                P[j] = temp;
            }
    for(int i=0; i<N; i++) sum += P[i]*(N-i);
    printf("%d", sum);
}
