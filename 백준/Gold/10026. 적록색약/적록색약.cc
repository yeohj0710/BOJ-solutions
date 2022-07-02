#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<vector<char>> v, u;
vector<vector<bool>> vis;

void DFS(int x, int y, int m) {
    vis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if(vis[nx][ny]) continue;

        if(m == 1 && v[nx][ny] != v[x][y]) continue;
        if(m == 2 && u[nx][ny] != u[x][y]) continue;

        DFS(nx, ny, m);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<char>(N));
    u.resize(N, vector<char>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> v[i][j];

            if(v[i][j] == 'R') u[i][j] = 'G';
            else u[i][j] = v[i][j];
        }

    int ans = 0;
    vis.resize(N, vector<bool>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(!vis[i][j]) {
                DFS(i, j, 1);
                ans++;
            }

    cout << ans << " ";

    ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) vis[i][j] = false;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(!vis[i][j]) {
                DFS(i, j, 2);
                ans++;
            }

    cout << ans << "\n";
}
