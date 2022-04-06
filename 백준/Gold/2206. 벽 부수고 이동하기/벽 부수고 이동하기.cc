#include <iostream>
#include <queue>
using namespace std;

bool Map[1005][1005];
int N, M, breakable;
int visit[1005][1005][2], unit[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
queue<pair<pair<int, int>, int>> Q;

int BFS() {
    int x, y, next_x, next_y;
    Q.push({{1,1},1});
    visit[1][1][1] = 1;
    while(!Q.empty()) {
        y = Q.front().first.first;
        x = Q.front().first.second;
        breakable = Q.front().second;
        Q.pop();
        if(y == N && x == M) return visit[y][x][breakable];
        for(int i=0; i<4; i++) {
            next_y = y + unit[i][0];
            next_x = x + unit[i][1];
            if(next_y>=1 && next_y<=N && next_x>=1 && next_x<=M) {
                if(Map[next_y][next_x] && breakable && !visit[next_y][next_x][breakable-1]) {
                    visit[next_y][next_x][breakable-1] = visit[y][x][breakable]+1;
                    Q.push({{next_y, next_x}, breakable-1});
                }
                else if(!Map[next_y][next_x] && !visit[next_y][next_x][breakable]) {
                    visit[next_y][next_x][breakable] = visit[y][x][breakable]+1;
                    Q.push({{next_y, next_x}, breakable});
                }
            }
        }
    }
    return -1;
}

int main() {
    cin >> N >> M;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) scanf("%1d", &Map[i][j]);
    cout << BFS();
}
