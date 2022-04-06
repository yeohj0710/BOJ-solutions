#include<stdio.h>

int graph[1005][1005] = {0, }, visit[1005] = {0, }, N, M, count = 0;

void DFS(int V) {
    visit[V] = 1;
    for(int i=1; i<=N; i++) if(graph[V][i] && !visit[i]) DFS(i);
}

int main() {
    int x, y;
    scanf("%d %d", &N, &M);
    for(int i=1; i<=M; i++) {
        scanf("%d %d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    for(int i=1; i<=N; i++) if(!visit[i]) DFS(i), count++;
    printf("%d", count);
}
