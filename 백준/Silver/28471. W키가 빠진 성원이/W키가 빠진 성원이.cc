#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<char>> v(N, vector<char>(N));
    vector<vector<bool>> vis(N, vector<bool>(N));
    queue<pair<int, int>> q;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> v[i][j];

            if(v[i][j] == 'F') {
                q.push({i, j});
                vis[i][j] = true;
            }
        }

    int ans = 0;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int dx[7] = {-1, -1, 0, 1, 1, 0, -1};
        int dy[7] = {0, 1, 1, 1, -1, -1, -1};

        for(int i=0; i<7; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(v[nx][ny] != '.' || vis[nx][ny]) continue;

            q.push({nx, ny});
            vis[nx][ny] = true;
            ans++;
        }
    }

    cout << ans << "\n";
}
