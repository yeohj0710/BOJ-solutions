#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> v;
vector<vector<bool>> vis;
int N, M, K, cnt;

void f(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(vis[nx][ny] || v[nx][ny] != 1) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M >> K;

    v.resize(N, vector<int>(M));

    while(K--) {
        int a, b; cin >> a >> b;

        v[a-1][b-1] = 1;
    }

    vis.resize(N, vector<bool>(M));
    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == 1 && !vis[i][j]) {
                cnt = 0;

                f(i, j);

                ans = max(ans, cnt);
            }

    cout << ans << "\n";
}
