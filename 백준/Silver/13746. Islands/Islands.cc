#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> v;
vector<vector<bool>> vis;
int N, M;

void f(int x, int y) {
    vis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] == 'W' || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;
    vis.resize(N, vector<bool>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == 'L' && !vis[i][j]) {
                ans++;
                f(i, j);
            }

    cout << ans << "\n";
}
