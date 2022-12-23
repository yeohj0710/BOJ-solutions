#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<vector<bool>> vis(N, vector<bool>(M));

    bool check = true;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(vis[i][j]) continue;

            vis[i][j] = true;
            int cnt = 1;

            queue<pair<int, int>> q;
            q.push({i, j});

            int u = i, d = i, l = j, r = j;

            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                int dx[4] = {1, -1, 0, 0};
                int dy[4] = {0, 0, 1, -1};

                for(int k=0; k<4; k++) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];

                    if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                    if(vis[nx][ny] || v[nx][ny] != v[x][y]) continue;

                    vis[nx][ny] = true;
                    cnt++;

                    u = min(u, nx), d = max(d, nx);
                    l = min(l, ny), r = max(r, ny);

                    q.push({nx, ny});
                }
            }

            if((d-u+1) * (r-l+1) != cnt) check = false;
        }

    if(check) cout << "dd\n";
    else cout << "BaboBabo\n";
}
