#include <bits/stdc++.h>
using namespace std;

int N, M;
char arr[51][51];
bool vis[51][51] = {};
bool check = false;

void DFS(int x, int y, int dir, int cnt, int sx, int sy) {
    vis[x][y] = true;

    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(arr[nx][ny] != arr[x][y]) continue;

        if(!vis[nx][ny]) {
            if(i == dir) DFS(nx, ny, i, cnt, sx, sy);
            else DFS(nx, ny, i, cnt+1, sx, sy);
        }
        else if(nx == sx && ny == sy && cnt >= 4) {
            check = true;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;
    cin.ignore();

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> arr[i][j];
        cin.ignore();
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            for(int k=0; k<4; k++) {
                memset(vis, false, sizeof(vis));

                DFS(i, j, k, 1, i, j);

                if(check) {
                    cout << "Yes\n";
                    return 0;
                }
            }
        }

    cout << "No\n";
}
