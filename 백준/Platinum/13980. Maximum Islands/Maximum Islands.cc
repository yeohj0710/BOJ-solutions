#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<char>> v;
vector<vector<bool>> lvis;

void g(int x, int y) {
    lvis[x][y] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 1 || ny < 1 || nx > N || ny > M) continue;
        if(v[nx][ny] != 'L' || lvis[nx][ny]) continue;

        g(nx, ny);
    }
}

vector<vector<int>> adj;
vector<int> l, r;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(r[y] == -1 || (!vis[r[y]] && f(r[y]))) {
            l[x] = y, r[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N+1, vector<char>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    lvis.resize(N+1, vector<bool>(M+1));
    int lnd = 0;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            if(v[i][j] == 'L' && !lvis[i][j]) {
                g(i, j);
                lnd++;
            }

    vector<vector<bool>> u(N+1, vector<bool>(M+1));
    int cnt = 0;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            if(v[i][j] != 'C') continue;

            int di[4] = {1, -1, 0, 0};
            int dj[4] = {0, 0, 1, -1};

            bool check = true;

            for(int k=0; k<4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni < 1 || nj < 1 || ni > N || nj > M) continue;
                if(v[ni][nj] == 'L') check = false;
            }

            if(check) {
                u[i][j] = true;
                cnt++;
            }
        }

    int s = (N*M + 1) / 2;

    adj.resize(s+1);

    for(int i=1; i<=N; i++)
        for(int j=!(i%2)+1; j<=M; j+=2) {
            if(!u[i][j]) continue;

            int di[4] = {1, -1, 0, 0};
            int dj[4] = {0, 0, 1, -1};

            for(int k=0; k<4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni < 1 || nj < 1 || ni > N || nj > M) continue;
                if(v[ni][nj] != 'C' || !u[ni][nj]) continue;

                adj[((i-1)*M+j+1)/2].push_back(((ni-1)*M+nj+1)/2);
            }
        }

    l.resize(s+1, -1);
    r.resize(s+1, -1);

    int match = 0;

    for(int i=1; i<=s; i++) {
        vis.clear();
        vis.resize(s+1);

        if(f(i)) match++;
    }

    int ans = lnd + cnt - match;

    cout << ans << "\n";
}
