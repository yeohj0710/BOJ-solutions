#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N+1, vector<char>(M+1));
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    vector<vector<int>> dis(N+1, vector<int>(M+1, -1));
    dis[1][1] = 0;

    queue<pair<int, int>> q;
    q.push({1, 1});

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
            if(v[nx][ny] != '.' || dis[nx][ny] != -1) continue;

            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    int x = N, y = M;
    vector<pair<int, int>> u;
    u.push_back({N, M});

    while(x != 1 || y != 1) {
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 1 || ny < 1 || nx > N || ny > M) continue;

            if(dis[nx][ny] == dis[x][y] - 1) {
                u.push_back({nx, ny});
                x = nx, y = ny;
                break;
            }
        }
    }

    for(int i=u.size()-1; i>=0; i--)
        cout << u[i].first << " " << u[i].second << "\n";
}
