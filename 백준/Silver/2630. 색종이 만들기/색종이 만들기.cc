#include <stdio.h>

int N, arr[150][150] = {0, }, visit[150][150] = {0, }, temp, count_white = 0, count_blue = 0, check;

void check_block(int y, int x, int block) {
    check = 1;
    for(int i=y; i<y+block; i++)
        for(int j=x; j<x+block; j++)
            if(arr[i][j] != arr[y][x]) check = 0;
    if(check) {
        for(int i=y; i<y+block; i++)
            for(int j=x; j<x+block; j++) visit[i][j] = 1;
        if(arr[y][x]) count_blue++;
        else count_white++;
    }
}

int main() {
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) scanf("%d", &arr[i][j]);
    temp = N;
    while(temp) {
        for(int i=1; i<=N; i+=temp)
            for(int j=1; j<=N; j+=temp) {
                if(temp == 1 && !visit[i][j]) {
                    visit[i][j] = 1;
                    if(arr[i][j]) count_blue++;
                    else count_white++;
                }
                else if(!visit[i][j]) check_block(i, j, temp);
            }
        temp /= 2;
    }
    printf("%d\n%d", count_white, count_blue);
}
