#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<int>> u;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(u[nx][ny] != 1 || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    vector<vector<vector<int>>> v(N, vector<vector<int>>(M, vector<int>(3)));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> v[i][j][0] >> v[i][j][1] >> v[i][j][2];

    int x; cin >> x;

    u.resize(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j][0] + v[i][j][1] + v[i][j][2] >= x*3) u[i][j] = 1;
            else u[i][j] = 0;
        }

    vis.resize(N, vector<bool>(M));
    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(u[i][j] == 1 && !vis[i][j]) {
                f(i, j);

                ans++;
            }

    cout << ans << "\n";
}
