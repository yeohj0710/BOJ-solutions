#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<vector<bool>> vis(N, vector<bool>(M));
    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j] != 0 || vis[i][j]) continue;

            queue<pair<int, int>> q; q.push({i, j});

            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second; q.pop();

                int dx[4] = {1, -1, 0, 0};
                int dy[4] = {0, 0, 1, -1};

                for(int k=0; k<4; k++) {
                    int nx = (x + dx[k] + N) % N;
                    int ny = (y + dy[k] + M) % M;

                    if(v[nx][ny] != 0 || vis[nx][ny]) continue;

                    vis[nx][ny] = true;
                    q.push({nx, ny});
                }
            }

            ans++;
        }

    cout << ans << "\n";
}
