#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            vector<vector<int>> vis(N, vector<int>(M, -1));
            vis[i][j] = 0;

            queue<pair<int, int>> q;
            q.push({i, j});

            int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
            int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                for(int k=0; k<8; k++) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];

                    if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                    if(vis[nx][ny] != -1) continue;

                    vis[nx][ny] = vis[x][y] + 1;
                    q.push({nx, ny});
                }
            }

            int dist = INT_MAX;
            for(int k=0; k<N; k++)
                for(int l=0; l<M; l++)
                    if(v[k][l] == 1) dist = min(dist, vis[k][l]);

            ans = max(ans, dist);
        }

    cout << ans << "\n";
}
