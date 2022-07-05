#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, ans = 0;
vector<vector<int>> v, w;
vector<pair<int, int>> u;
vector<vector<bool>> vis;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void h(int x, int y) {
    vis[x][y] = true;

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
        if(w[nx][ny] != 0 || vis[nx][ny]) continue;

        w[nx][ny] = 2;
        h(nx, ny);
    }
}

void g() {
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) w[i][j] = v[i][j];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) vis[i][j] = false;

    for(int i=0; i<u.size(); i++)
        w[u[i].first][u[i].second] = 1;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(w[i][j] == 2 && !vis[i][j]) h(i, j);

    int cnt = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(w[i][j] == 0) cnt++;

    ans = max(ans, cnt);
}

void f(int cnt) {
    if(cnt == 3) {
        g();
        return;
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j] != 0) continue;

            bool check = true;
            for(int k=0; k<u.size(); k++)
                if(i == u[k].first && j == u[k].second) check = false;
            if(!check) continue;

            u.push_back({i, j});
            f(cnt + 1);
            u.pop_back();
        }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<int>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    w.resize(N, vector<int>(M));
    vis.resize(N, vector<bool>(M));

    f(0);

    cout << ans << "\n";
}
