#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<vector<int>> v(5, vector<int>(5));

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) cin >> v[i][j];

    int sx, sy; cin >> sx >> sy;

    vector<vector<int>> dis(5, vector<int>(5, -1));
    dis[sx][sy] = 0;

    queue<pair<int, int>> q;
    q.push({sx, sy});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(v[x][y] == 1) {
            cout << dis[x][y] << "\n";
            return 0;
        }

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;
            if(v[nx][ny] == -1 || dis[nx][ny] != -1) continue;

            dis[nx][ny] = dis[x][y] + 1;
            q.push({nx, ny});
        }
    }

    cout << -1 << "\n";
}
