#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<vector<char>> v(N, vector<char>(M));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        vector<vector<bool>> vis(N, vector<bool>(M));

        int sec = 0, spa = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(v[i][j] == '.' && !vis[i][j]) {
                    vis[i][j] = true;
                    sec++, spa++;

                    struct s { int x, y; };
                    queue<s> q; q.push({i, j});

                    while(!q.empty()) {
                        int x = q.front().x;
                        int y = q.front().y;
                        q.pop();

                        int dx[4] = {1, -1, 0, 0};
                        int dy[4] = {0, 0, 1, -1};

                        for(int k=0; k<4; k++) {
                            int nx = x + dx[k];
                            int ny = y + dy[k];

                            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                            if(vis[nx][ny] || v[nx][ny] != '.') continue;

                            vis[nx][ny] = true;
                            q.push({nx, ny});
                            spa++;
                        }
                    }
                }

        cout << sec << " section" << ((sec == 1) ? "" : "s") << ", "
              << spa << " space" << ((spa == 1) ? "" : "s") << "\n";
    }
}
