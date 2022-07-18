#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> M >> N;
        if(N == 0 && M == 0) break;

        vector<vector<char>> v(N, vector<char>(M));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        vector<vector<bool>> vis(N, vector<bool>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(v[i][j] != 'S') continue;

                queue<pair<int, int>> q;
                q.push({i, j});

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
                        if(vis[nx][ny] || v[nx][ny] != 'T') continue;

                        vis[nx][ny] = true;
                        v[nx][ny] = 'S';
                        q.push({nx, ny});
                    }
                }
            }

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) cout << v[i][j];
            cout << "\n";
        }
    }
}
