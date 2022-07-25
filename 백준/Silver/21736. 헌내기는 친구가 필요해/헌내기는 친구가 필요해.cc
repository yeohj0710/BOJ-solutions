#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<bool>> vis(N, vector<bool>(M));
    queue<pair<int, int>> q;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == 'I') {
                vis[i][j] = true;
                q.push({i, j});
            }
        }

    int ans = 0;

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
            if(vis[nx][ny] || v[nx][ny] == 'X') continue;

            if(v[nx][ny] == 'P') ans++;

            vis[nx][ny] = true;
            q.push({nx, ny});
        }
    }

    if(ans > 0) cout << ans << "\n";
    else cout << "TT\n";
}
