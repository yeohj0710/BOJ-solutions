#include <iostream>
using namespace std;

char Map[25][25];
bool check[26] = {0, };
int unit[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int R, C, Max = 0;

void DFS(int y, int x, int cnt) {
    for(int i=0; i<4; i++) {
        int next_y = y + unit[i][0], next_x = x + unit[i][1];
        if(next_y >= 0 && next_y < R && next_x >= 0 && next_x < C && !check[Map[next_y][next_x]-'A']) {
            check[Map[next_y][next_x]-'A'] = 1;
            DFS(next_y, next_x, cnt+1);
            check[Map[next_y][next_x]-'A'] = 0;
        }
    }
    if(cnt > Max) Max = cnt;
}

int main() {
    cin >> R >> C;
    for(int i=0; i<R; i++) cin >> Map[i];
    check[Map[0][0]-'A'] = 1;
    DFS(0, 0, 1);
    cout << Max;
}
