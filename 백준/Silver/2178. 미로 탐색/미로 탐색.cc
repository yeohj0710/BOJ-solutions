#include<stdio.h>

int map[105][105] = {0, }, visit[105][105] = {0, }, dist[105][105], queueX[10005] = {0, }, queueY[10005] = {0, }, N, M;

void BFS(int X, int Y) {
    int front = 0, rear = 1, popX, popY;
    visit[X][Y] = 1;
    queueX[0] = X, queueY[0] = Y;
    while(front < rear) {
        popX = queueX[front], popY = queueY[front++];
        if(map[popX+1][popY] && !visit[popX+1][popY]) {
            visit[popX+1][popY] = 1;
            dist[popX+1][popY] = dist[popX][popY]+1;
            queueX[rear] = popX+1;
            queueY[rear++] = popY;
        }
        if(map[popX-1][popY] && !visit[popX-1][popY]) {
            visit[popX-1][popY] = 1;
            dist[popX-1][popY] = dist[popX][popY]+1;
            queueX[rear] = popX-1;
            queueY[rear++] = popY;
        }
        if(map[popX][popY+1] && !visit[popX][popY+1]) {
            visit[popX][popY+1] = 1;
            dist[popX][popY+1] = dist[popX][popY]+1;
            queueX[rear] = popX;
            queueY[rear++] = popY+1;
        }
        if(map[popX][popY-1] && !visit[popX][popY-1]) {
            visit[popX][popY-1] = 1;
            dist[popX][popY-1] = dist[popX][popY]+1;
            queueX[rear] = popX;
            queueY[rear++] = popY-1;
        }
    }
}

int main() {
    int x, y;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) scanf("%1d", &map[i][j]);
    dist[1][1] = 1;
    BFS(1, 1);
    printf("%d", dist[N][M]);
}
