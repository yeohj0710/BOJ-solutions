#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y, dis; };

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> M >> N;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    deque<s> d;
    d.push_back({0, 0, 0});

    vector<vector<bool>> vis(N, vector<bool>(M));
    vis[0][0] = true;

    while(!d.empty()) {
        int x = d.front().x, y = d.front().y, dis = d.front().dis;
        d.pop_front();

        if(x == N-1 && y == M-1) {
            cout << dis << "\n";
            break;
        }

        int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

        for(int i=0; i<4; i++) {
            int nx = x + dx[i], ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(vis[nx][ny]) continue;

            vis[nx][ny] = true;

            if(v[nx][ny] == '1') d.push_back({nx, ny, dis+1});
            else d.push_front({nx, ny, dis});
        }
    }
}
