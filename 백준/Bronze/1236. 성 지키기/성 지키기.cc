#include<stdio.h>

int main() {
    int N, M, num_x = 0, num_y = 0, check;
    char castle[51][51];
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) scanf("%s", castle[i]);
    for(int i=0; i<N; i++) {
        check = 0;
        for(int j=0; j<M; j++) if(castle[i][j] == 'X') check = 1;
        if(check) num_y++;
    }
    for(int j=0; j<M; j++) {
        check = 0;
        for(int i=0; i<N; i++) if(castle[i][j] == 'X') check = 1;
        if(check) num_x++;
    }
    printf("%d", N-num_y > M-num_x ? N-num_y : M-num_x);
}
