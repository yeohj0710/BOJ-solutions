#include<stdio.h>

void hanoi(int N, int start, int end, int remain) {
    if(N == 1) {
        printf("%d %d\n", start, end);
        return;
    }
    hanoi(N-1, start, remain, end);
    printf("%d %d\n", start, end);
    hanoi(N-1, remain, end, start);
}

int main() {
    int N, K = 1;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) K *= 2;
    printf("%d\n", --K);
    hanoi(N, 1, 3, 2);
}
