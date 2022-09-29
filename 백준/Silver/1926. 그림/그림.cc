#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 501;

int N, M, cnt = 0;
int v[MAX][MAX];
bool vis[MAX][MAX];

void f(int x, int y) {
    vis[x][y] = true;
    cnt++;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != 1 || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    memset(vis, false, sizeof(vis));

    int ans = 0, Max = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == 1 && !vis[i][j]) {
                cnt = 0;

                f(i, j);

                ans++;
                Max = max(Max, cnt);
            }

    cout << ans << "\n";
    cout << Max << "\n";
}
