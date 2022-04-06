#include<stdio.h>

int main() {
    int N, M, A, B, count, isOdd, min = 64;
    char board[51][51];
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) scanf("%s", board[i]);
    for(int A=0; A<=N-8; A++) {
        for(int B=0; B<=M-8; B++) {
            isOdd = 0;
            count = 0;
            for(int i=A; i<A+8; i++) {
                isOdd = !isOdd;
                for(int j=B; j<B+8; j++) {
                    isOdd = !isOdd;
                    if(board[i][j] == 'W' && isOdd) count++;
                    if(board[i][j] == 'B' && !isOdd) count++;
                }
            }
            if(count < min) min = count;
            count = 0;
            isOdd = 1;
            for(int i=A; i<A+8; i++) {
                isOdd = !isOdd;
                for(int j=B; j<B+8; j++) {
                    isOdd = !isOdd;
                    if(board[i][j] == 'W' && isOdd) count++;
                    if(board[i][j] == 'B' && !isOdd) count++;
                }
            }
            if(count < min) min = count;
        }
    }
    printf("%d", min);
}
