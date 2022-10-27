#include <bits/stdc++.h>
#define int long long
using namespace std;

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

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M, K; cin >> N >> M >> K;

        vector<vector<vector<int>>> v(K+1, vector<vector<int>>(N+1, vector<int>(M+1, -1)));

        for(int i=1; i<=K; i++)
            for(int j=1; j<=N; j++)
                for(int k=1; k<=M; k++) {
                    char ch; cin >> ch;

                    if(ch == '.') v[i][j][k] = 0;
                }

        int cnt = 0;

        for(int i=1; i<=K; i++)
            for(int j=1; j<=N; j++)
                for(int k=1; k<=M; k++) {
                    if(v[i][j][k] != 0) continue;

                    cnt++;
                    v[i][j][k] = cnt;

                    queue<pair<int, int>> q;
                    q.push({j, k});

                    vector<vector<bool>> vis(N+1, vector<bool>(M+1));
                    vis[j][k] = true;

                    while(!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();

                        int dx[4] = {1, -1, 0, 0};
                        int dy[4] = {0, 0, 1, -1};

                        for(int l=0; l<4; l++) {
                            int nx = x + dx[l];
                            int ny = y + dy[l];

                            if(nx < 1 || ny < 1 || nx > N || ny > M) continue;
                            if(v[i][nx][ny] != 0) continue;

                            v[i][nx][ny] = cnt;
                            q.push({nx, ny});
                        }
                    }
                }

        adj.clear();
        adj.resize(cnt+1);

        for(int i=1; i<=K; i+=2)
            for(int j=1; j<=N; j++)
                for(int k=1; k<=M; k++) {
                    if(v[i][j][k] == -1) continue;

                    int dz[2] = {1, -1};

                    for(int l=0; l<2; l++) {
                        int nz = i + dz[l];

                        if(nz < 1 || nz > K) continue;
                        if(v[nz][j][k] == -1) continue;

                        adj[v[i][j][k]].push_back(v[nz][j][k]);
                    }
                }

        l.clear(); l.resize(cnt+1, -1);
        r.clear(); r.resize(cnt+1, -1);

        int match = 0;

        for(int i=1; i<=cnt; i++) {
            vis.clear();
            vis.resize(cnt+1);

            if(f(i)) match++;
        }

        int ans = cnt - match;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
