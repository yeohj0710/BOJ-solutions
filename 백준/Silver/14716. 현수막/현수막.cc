#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> v;
vector<vector<int>> vis;

void f(int x, int y) {
    vis[x][y] = true;

    int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
    int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

    for(int i=0; i<8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != 1 || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;
    vis.resize(N, vector<int>(M, false));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == 1 && !vis[i][j]) {
                f(i, j);
                ans++;
            }

    cout << ans << "\n";
}
