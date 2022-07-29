#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;

    for(int k=1; k<=K; k++) {
        char b, e;
        if(k == 1) b = 'S', e = '1';
        else b = char(k - 1 + '0'), e = char(k + '0');

        vector<vector<int>> dis(N, vector<int>(M, -1));
        queue<pair<int, int>> q;

        int ex, ey;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(v[i][j] == b) {
                    dis[i][j] = 0;
                    q.push({i, j});
                }
                else if(v[i][j] == e) {
                    ex = i;
                    ey = j;
                }
            }

        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x == ex && y == ey) {
                ans += dis[ex][ey];
                break;
            }

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            for(int i=0; i<4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if(v[nx][ny] == 'X' || dis[nx][ny] != -1) continue;

                dis[nx][ny] = dis[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    cout << ans << "\n";
}
