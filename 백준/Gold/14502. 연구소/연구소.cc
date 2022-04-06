#include<stdio.h>

int N, M, next_x, next_y, max = 0;
int map[10][10] = {0, }, map_copy[10][10] = {0, }, move_dir[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};
struct node { int x, y; };

void BFS() {
    struct node queue[100];
    int front = 0, rear = 1, count = 0;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            map_copy[i][j] = map[i][j];
            if(map_copy[i][j] == 2) queue[rear].x = j, queue[rear++].y = i;
        }
    while(++front < rear) {
        for(int i=0; i<4; i++) {
            next_x = queue[front].x + move_dir[0][i];
            next_y = queue[front].y + move_dir[1][i];
            if(next_x >= 1 && next_x <= M && next_y >= 1 && next_y <= N && !map_copy[next_y][next_x]) {
                map_copy[next_y][next_x] = 2;
                queue[rear].x = next_x;
                queue[rear++].y = next_y;
            }
        }
    }
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            if(!map_copy[i][j]) count++;
    if(count > max) {
        max = count;
        /*printf("\n");
        for(int i=1; i<=N; i++) {
                for(int j=1; j<=M; j++) printf("%d ", map_copy[i][j]);
                printf("\n");
        }*/
    }
}

void wall_select(int wall_count) {
    if(wall_count == 3) {
        BFS();
        return;
    }
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            if(!map[i][j]) {
                map[i][j] = 1;
                wall_select(wall_count + 1);
                map[i][j] = 0;
            }
}

int main() {
    scanf("%d %d", &N, &M);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) scanf("%d", &map[i][j]);
    wall_select(0);
    printf("%d", max);
}
