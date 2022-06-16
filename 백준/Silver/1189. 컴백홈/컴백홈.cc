#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, K, ans = 0;
vector<string> v;
vector<vector<bool>> vis;

void f(int x, int y, int cnt) {
    if(x == 0 && y == M-1 && cnt == K) {
        ans++;
        return;
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(vis[nx][ny] || v[nx][ny] != '.') continue;

        vis[nx][ny] = true;
        f(nx, ny, cnt+1);
        vis[nx][ny] = false;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M >> K;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vis.resize(N, vector<bool>(M));
    vis[N-1][0] = true;
    f(N-1, 0, 1);

    cout << ans << "\n";
}
