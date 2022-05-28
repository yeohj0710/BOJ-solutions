#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 1001;

int N, M;
char v[MAX][MAX];
bool vis[MAX][MAX], ans = false;

void f(int x, int y) {
    vis[x][y] = true;
    if(x == N-1) ans = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(v[nx][ny] != '0' || vis[nx][ny]) continue;

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

    for(int i=0; i<M; i++) {
        for(int i=0; i<N; i++)
            if(v[0][i] == '0' && !vis[0][i]) f(0, i);
    }

    if(ans) cout << "YES\n";
    else cout << "NO\n";
}
