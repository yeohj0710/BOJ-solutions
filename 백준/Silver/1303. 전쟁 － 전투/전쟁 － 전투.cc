#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, cnt;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int k=0; k<4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(vis[nx][ny] || v[nx][ny] != v[x][y]) continue;

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

    int a = 0, b = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(vis[i][j]) continue;

            cnt = 0;

            f(i, j);

            if(v[i][j] == 'W') a += cnt*cnt;
            else if(v[i][j] == 'B') b += cnt*cnt;
        }

    cout << a << " " << b << "\n";
}
