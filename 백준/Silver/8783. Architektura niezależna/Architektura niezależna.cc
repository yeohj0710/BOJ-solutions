#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, cnt;
vector<vector<char>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if(v[nx][ny] != '.' || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        cin >> N;

        v.clear();
        v.resize(N, vector<char>(N));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        vis.clear();
        vis.resize(N, vector<bool>(N));

        cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if(i == 0 || j == 0 || i == N-1 || j == N-1) {
                    if(v[i][j] == '.' && !vis[i][j]) f(i, j);
                }

        int ans = N*N - cnt;

        cout << ans << "\n";
    }
}
