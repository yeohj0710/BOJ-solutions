#include<stdio.h>

int N, map[30][30] = {0, }, visit[30][30] = {0, }, households[900] = {0, }, var[3][5] = {{1, -1, 0, 0}, {0, 0, 1, -1}}, count = 1, temp;

void DFS(int X, int Y) {
    visit[X][Y] = 1;
    households[count]++;
    for(int i=0; i<4; i++) if(map[X+var[0][i]][Y+var[1][i]] && !visit[X+var[0][i]][Y+var[1][i]]) DFS(X+var[0][i], Y+var[1][i]);
}

int main() {
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) scanf("%1d", &map[i][j]);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) if(map[i][j] && !visit[i][j]) DFS(i, j), count++;
    printf("%d\n", --count);
    for(int i=1; i<=count; i++)
        for(int j=i+1; j<=count; j++)
            if(households[i] > households[j]) {
                temp = households[i];
                households[i] = households[j];
                households[j] = temp;
            }
    for(int i=1; i<=count; i++) printf("%d\n", households[i]);
}
