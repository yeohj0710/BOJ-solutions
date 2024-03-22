#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> M >> N;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    struct s { int x, y; };
    queue<s> q; q.push({0, 0});

    vector<vector<bool>> vis(N, vector<bool>(M));
    vis[0][0] = true;

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y; q.pop();

        if(x == N-1 && y == M-1) {
            cout << "Yes\n";
            return 0;
        }

        int dx[2] = {1, 0};
        int dy[2] = {0, 1};

        for(int i=0; i<2; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= N || ny >= M) continue;
            
            if(v[nx][ny] == 1 && !vis[nx][ny]) {
                q.push({nx, ny});
                vis[nx][ny] = true;
            }
        }
    }

    cout << "No\n";
}
