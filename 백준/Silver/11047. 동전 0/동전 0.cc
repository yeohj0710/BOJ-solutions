#include<stdio.h>

int main() {
    int N, K, coin[11], count = 0;
    scanf("%d %d", &N, &K);
    for(int i=1; i<=N; i++) scanf("%d", &coin[i]);
    for(int i=N; i>0; i--) {
        while(K > 0) {
            K -= coin[i];
            count++;
        }
        if(K < 0) {
            K += coin[i];
            count--;
        }
    }
    printf("%d", count);
}
