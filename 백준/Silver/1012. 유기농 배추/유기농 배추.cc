#include<stdio.h>

int field[51][51], visit[51][51], M, N, K, count;

void DFS(int x, int y) {
    visit[x][y] = 1;
    if(field[x+1][y] && !visit[x+1][y]) DFS(x+1, y);
    if(field[x-1][y] && !visit[x-1][y]) DFS(x-1, y);
    if(field[x][y+1] && !visit[x][y+1]) DFS(x, y+1);
    if(field[x][y-1] && !visit[x][y-1]) DFS(x, y-1);
}

int main() {
    int T, x, y;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        count = 0;
        scanf("%d %d %d", &M, &N, &K);
        for(int j=0; j<=M; j++)
            for(int k=0; k<N; k++) {
                field[j][k] = 0;
                visit[j][k] = 0;
            }
        for(int j=0; j<K; j++) {
            scanf("%d %d", &x, &y);
            field[x][y] = 1;
        }
        for(int j=0; j<M; j++)
            for(int k=0; k<N; k++)
                if(field[j][k] && !visit[j][k]) {
                    DFS(j, k);
                    count++;
                }
        printf("%d\n", count);
    }
}
