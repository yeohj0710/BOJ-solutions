#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

        if(v[nx][ny] == '#' && !vis[nx][ny]) f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;
    cin.ignore();

    v.resize(N, vector<char>(M));
    vis.resize(N, vector<bool>(M, false));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> v[i][j];
        cin.ignore();
    }

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == '#' && !vis[i][j]) {
                f(i, j);
                ans++;
            }

    cout << ans << "\n";
}
