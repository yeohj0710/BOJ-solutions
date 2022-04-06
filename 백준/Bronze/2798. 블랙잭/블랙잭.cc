#include<stdio.h>

int main() {
    int N, M, card[105], max = 0;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) scanf("%d", &card[i]);
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            for(int k=j+1; k<N; k++)
                if(card[i]+card[j]+card[k] > max && card[i]+card[j]+card[k] <= M) max = card[i]+card[j]+card[k];
    printf("%d", max);
}
