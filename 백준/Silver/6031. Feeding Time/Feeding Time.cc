#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, cnt;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    for(int i=0; i<8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != '.' || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> M >> N;

    v.resize(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vis.resize(N, vector<bool>(M));
    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j] != '.' || vis[i][j]) continue;

            cnt = 0;
            f(i, j);

            ans = max(ans, cnt);
        }

    cout << ans << "\n";
}
