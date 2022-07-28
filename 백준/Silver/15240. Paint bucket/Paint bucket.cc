#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
char col;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y, char c) {
    vis[x][y] = true;
    v[x][y] = col;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != c || vis[nx][ny]) continue;

        f(nx, ny, c);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int bx, by; cin >> bx >> by >> col;

    vis.resize(N, vector<bool>(M));

    f(bx, by, v[bx][by]);

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j];
        cout << "\n";
    }
}
