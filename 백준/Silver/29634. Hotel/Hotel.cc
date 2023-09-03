#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, cnt;
vector<vector<char>> v;
vector<vector<bool>> vis;

void dfs(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != '.' || vis[nx][ny]) continue;

        dfs(nx, ny);
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> N >> M;

    v.resize(N, vector<char>(M));
    vis.resize(N, vector<bool>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = -1;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == '.' && !vis[i][j]) {
                cnt = 0;
                dfs(i, j);
                ans = max(ans, cnt);
            }

    cout << ans << "\n";
}
