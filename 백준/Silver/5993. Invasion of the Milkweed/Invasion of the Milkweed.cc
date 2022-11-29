#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, X, Y; cin >> M >> N >> Y >> X;

    X = N - X + 1;

    vector<vector<char>> v(N+1, vector<char>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    vector<vector<int>> dis(N+1, vector<int>(M+1, -1));
    dis[X][Y] = 0;

    queue<pair<int, int>> q;
    q.push({X, Y});

    int ans = 0;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

        for(int i=0; i<8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 1 || ny < 1 || nx > N || ny > M) continue;
            if(v[nx][ny] != '.' || dis[nx][ny] != -1) continue;

            dis[nx][ny] = dis[x][y] + 1;
            ans = max(ans, dis[nx][ny]);

            q.push({nx, ny});
        }
    }

    cout << ans << "\n";
}
