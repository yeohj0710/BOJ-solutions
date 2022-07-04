#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, K;
int v[51][51];
bool vis[51][51];

void DFS(int x, int y) {
    vis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != 1 || vis[nx][ny]) continue;

        DFS(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        cin >> N >> M >> K;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) v[i][j] = 0;

        while(K--) {
            int a, b; cin >> a >> b;
            v[a][b] = 1;
        }

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) vis[i][j] = false;

        int ans = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(v[i][j] == 1 && !vis[i][j]) {
                    DFS(i, j);
                    ans++;
                }

        cout << ans << "\n";
    }
}
