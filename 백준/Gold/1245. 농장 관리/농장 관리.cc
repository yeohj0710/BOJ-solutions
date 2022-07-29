#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<int>> v;
vector<vector<bool>> vis;

void f(int x, int y) {
    vis[x][y] = true;

    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    for(int i=0; i<8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(vis[nx][ny] || v[nx][ny] > v[x][y]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vis.resize(N, vector<bool>(M));
    int ans = 0;

    while(true) {
        int Max = -1;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(!vis[i][j]) Max = max(Max, v[i][j]);

        if(Max == -1) break;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(!vis[i][j] && v[i][j] == Max) {
                    f(i, j);

                    ans++;
                }
    }

    cout << ans << "\n";
}
