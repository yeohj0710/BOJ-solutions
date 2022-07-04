#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<char>> v;
vector<bool> vis(26);
int N, M, ans = 0;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void DFS(int x, int y, int cnt) {
    ans = max(ans, cnt);

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(vis[v[nx][ny] - 'A']) continue;

        vis[v[nx][ny] - 'A'] = true;
        DFS(nx, ny, cnt+1);
        vis[v[nx][ny] - 'A'] = false;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vis[v[0][0] - 'A'] = true;
    DFS(0, 0, 1);

    cout << ans << "\n";
}
