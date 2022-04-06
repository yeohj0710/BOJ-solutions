#include<stdio.h>

struct node { int x, y; } queue[1000005];
int tomato[1005][1005] = {0, }, day[1005][1005] = {0, }, var[2][4] = {{1, -1, 0, 0}, {0, 0, 1, -1}};
int M, N, count = 0, front = 0, rear = 1;

int BFS() {
    int popX, popY;
    while(++front < rear) {
        for(int i=0; i<4; i++) {
            popX = queue[front].x + var[0][i];
            popY = queue[front].y + var[1][i];
            if(popX >= 1 && popX <= M && popY >= 1 && popY <= N && tomato[popY][popX] == 0) {
                tomato[popY][popX] = 1;
                day[popY][popX] = day[queue[front].y][queue[front].x] + 1;
                queue[rear].x = popX;
                queue[rear++].y = popY;
                count--;
            }
        }
    }
    if(!count) return day[queue[rear-1].y][queue[rear-1].x];
    else return -1;
}

int main() {
    scanf("%d %d", &M, &N);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            scanf("%d", &tomato[i][j]);
            if(tomato[i][j] == 0) count++;
            else if(tomato[i][j] == 1) {
                queue[rear].x = j;
                queue[rear++].y = i;
            }
        }
    printf("%d", BFS());
}
