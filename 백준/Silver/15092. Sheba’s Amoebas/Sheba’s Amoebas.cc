#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 1001;

int N, M;
char v[MAX][MAX];
bool vis[MAX][MAX];

void f(int x, int y) {
    vis[x][y] = true;

    int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
    int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

    for(int i=0; i<8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != '#' || vis[nx][ny]) continue;

        f(nx, ny);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;
    cin.ignore();

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> v[i][j];
        cin.ignore();
    }

    memset(vis, false, sizeof(vis));

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(v[i][j] == '#' && !vis[i][j]) {
                f(i, j);
                ans++;
            }

    cout << ans << "\n";
}
