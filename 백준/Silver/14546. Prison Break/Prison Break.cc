#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M, bx, by, ex, ey;
        cin >> M >> N >> by >> bx >> ey >> ex;

        bx = N - bx + 1;
        ex = N - ex + 1;

        vector<vector<char>> v(N+1, vector<char>(M+1));

        for(int i=1; i<=N; i++)
            for(int j=1; j<=M; j++) cin >> v[i][j];

        vector<vector<bool>> vis(N+1, vector<bool>(M+1));
        vis[bx][by] = true;

        queue<pair<int, int>> q;
        q.push({bx, by});

        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 1 || ny < 1 || nx > N || ny > M) continue;
                if(v[nx][ny] != v[x][y] || vis[nx][ny]) continue;

                vis[nx][ny] = true;
                q.push({nx, ny});
            }
        }

        if(vis[ex][ey]) cout << "YES\n";
        else cout << "NO\n";
    }
}
