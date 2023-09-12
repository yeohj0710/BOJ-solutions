#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;
    cin.ignore();

    vector<string> v(N);
    vector<pair<int, int>> u;

    for(int i=0; i<N; i++) {
        getline(cin, v[i]);
        for(int j=0; j<M; j++)
            if(v[i][j] >= 'A' && v[i][j] <= 'W') u.push_back({i, j});
    }

    vector<vector<bool>> vis(N, vector<bool>(M));
    int tot = 0;

    for(int i=0; i<u.size(); i++) {
        queue<pair<int, int>> q;
        q.push(u[i]);
        bool chk = false;

        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            for(int j=0; j<4; j++) {
                int nx = x + dx[j];
                int ny = y + dy[j];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if(vis[nx][ny] || !(v[nx][ny] == '.' || v[nx][ny] == ' ')) continue;

                q.push({nx, ny});
                vis[nx][ny] = true;
                if(v[nx][ny] == '.') chk = true;
            }
        }

        if(chk) tot++;
    }

    int cnt = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == '.' && !vis[i][j]) cnt++;

    cout << tot << " " << cnt << "\n";
}
