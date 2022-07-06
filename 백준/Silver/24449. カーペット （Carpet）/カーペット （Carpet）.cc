#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<vector<int>> vis(N, vector<int>(M, -1));
    vis[0][0] = 0;

    queue<pair<int, int>> q;
    q.push({0, 0});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == N-1 && y == M-1) {
            cout << vis[x][y] << "\n";
            return 0;
        }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(v[nx][ny] == v[x][y] || vis[nx][ny] != -1) continue;

            q.push({nx, ny});
            vis[nx][ny] = vis[x][y] + 1;
        }
    }

    cout << -1 << "\n";
}
