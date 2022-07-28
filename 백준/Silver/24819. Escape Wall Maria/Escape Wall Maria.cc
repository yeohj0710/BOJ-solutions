#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K, N, M; cin >> K >> N >> M;

    vector<vector<int>> dis(N, vector<int>(M, -1));
    queue<pair<int, int>> q;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == 'S') {
                dis[i][j] = 0;
                q.push({i, j});
            }
        }

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == 0 || x == N-1 || y == 0 || y == M-1) {
            if(dis[x][y] <= K) cout << dis[x][y] << "\n";
            else cout << "NOT POSSIBLE\n";
            return 0;
        }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(v[nx][ny] == '1' || dis[nx][ny] != -1) continue;

            if(i != 0 && v[nx][ny] == 'U') continue;
            if(i != 1 && v[nx][ny] == 'D') continue;
            if(i != 2 && v[nx][ny] == 'L') continue;
            if(i != 3 && v[nx][ny] == 'R') continue;

            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << "NOT POSSIBLE\n";
}
