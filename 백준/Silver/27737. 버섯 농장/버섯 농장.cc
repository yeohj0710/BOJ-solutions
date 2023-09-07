#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, K, cnt;
vector<vector<int>> v;
vector<vector<bool>> vis;

void dfs(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if(v[nx][ny] != 0 || vis[nx][ny]) continue;

        dfs(nx, ny);
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> N >> M >> K;

    v.resize(N, vector<int>(N));
    vis.resize(N, vector<bool>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    int tot = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(v[i][j] == 0 && !vis[i][j]) {
                cnt = 0;
                dfs(i, j);
                tot += (cnt - 1) / K + 1;
            }

    if(tot <= M && tot > 0) {
        cout << "POSSIBLE\n";
        cout << M - tot << "\n";
    }
    else cout << "IMPOSSIBLE\n";
}
