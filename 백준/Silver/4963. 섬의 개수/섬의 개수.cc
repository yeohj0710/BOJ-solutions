#include <bits/stdc++.h>
#define MAX 55
using namespace std;

int N, M;
int Map[MAX][MAX];
bool Visit[MAX][MAX];
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

void dfs(int x, int y) {
    Visit[x][y] = true;

    for(int i=0; i<8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

        if(Map[nx][ny] == 1 && !Visit[nx][ny]) dfs(nx, ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        for(int i=0; i<MAX; i++)
            for(int j=0; j<MAX; j++) {
                Map[i][j] = 0;
                Visit[i][j] = false;
            }

        cin >> M >> N;
        if(N == 0 && M == 0) break;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> Map[i][j];

        int cnt = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(Map[i][j] == 1 && !Visit[i][j]) {
                    dfs(i, j);
                    cnt++;
                }

        cout << cnt << "\n";
    }
}
