#include<stdio.h>

int n, connection[101][101], visit[101] = {0, }, count = 0;

void dfs(int x) {
    for(int i=1; i<=n; i++)
        if(connection[x][i] && !visit[i]) {
            visit[i] = 1;
            dfs(i);
            count++;
        }
}

int main() {
    int m, x, y;
    scanf("%d\n%d", &n, &m);
    for(int i=0; i<m; i++) {
        scanf("%d %d", &x, &y);
        connection[x][y] = 1;
        connection[y][x] = 1;
    }
    visit[1] = 1;
    dfs(1);
    printf("%d", count);
}
