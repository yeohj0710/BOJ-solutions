#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int sx, sy, ex, ey;
    vector<pair<int, int>> u;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == 'S') sx = i, sy = j;
            if(v[i][j] == 'H') ex = i, ey = j;
            if(v[i][j] == 'F') u.push_back({i, j});
        }

    vector<vector<int>> dis(N, vector<int>(M, -1));
    dis[sx][sy] = 0;

    queue<pair<int, int>> q;
    q.push({sx, sy});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(dis[nx][ny] != -1 || v[nx][ny] == 'D') continue;

            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    vector<vector<int>> dis2(N, vector<int>(M, -1));
    dis2[ex][ey] = 0;

    queue<pair<int, int>> q2;
    q2.push({ex, ey});

    while(!q2.empty()) {
        int x = q2.front().first;
        int y = q2.front().second;
        q2.pop();

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(dis2[nx][ny] != -1 || v[nx][ny] == 'D') continue;

            dis2[nx][ny] = dis2[x][y] + 1;
            q2.push({nx, ny});
        }
    }

    int ans = INT_MAX;

    for(int i=0; i<u.size(); i++) {
        int a = dis[u[i].first][u[i].second];
        int b = dis2[u[i].first][u[i].second];

        if(a == -1 || b == -1) continue;

        ans = min(ans, a + b);
    }

    if(ans == INT_MAX) cout << -1 << "\n";
    else cout << ans << "\n";
}
