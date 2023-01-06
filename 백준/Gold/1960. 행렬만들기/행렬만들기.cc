#include <bits/stdc++.h>
#define int long long
using namespace std;

struct MF {
    int sz, sour, sink;
    vector<vector<int>> adj, cap, flo;
    vector<int> lv, idx;

    void init(int sz_) {
        sz = sz_;

        adj.resize(sz);
        cap.resize(sz, vector<int>(sz));
        flo.resize(sz, vector<int>(sz));

        lv.resize(sz), idx.resize(sz);
    }

    void edge(int a, int b, int c) {
        adj[a].push_back(b);
        adj[b].push_back(a);
        cap[a][b] = c;
    }

    bool bfs() {
        lv.clear(); lv.resize(sz, -1); lv[sour] = 0;

        queue<int> q; q.push(sour);

        while(!q.empty()) {
            int x = q.front(); q.pop();

            for(auto y : adj[x]) {
                if(lv[y] != -1 || cap[x][y] - flo[x][y] == 0) continue;

                lv[y] = lv[x] + 1;
                q.push(y);
            }
        }

        if(lv[sink] != -1) return true;
        else return false;
    }

    int dfs(int x, int tot) {
        if(x == sink) return tot;

        for(int &i=idx[x]; i<adj[x].size(); i++) {
            int y = adj[x][i];

            if(lv[y] != lv[x] + 1 || cap[x][y] - flo[x][y] == 0) continue;

            int sfl = dfs(y, min(tot, cap[x][y] - flo[x][y]));

            if(sfl == 0) continue;

            flo[x][y] += sfl;
            flo[y][x] -= sfl;

            return sfl;
        }

        return 0;
    }

    void mf(int sour_, int sink_) {
        sour = sour_, sink = sink_;

        int mxf = 0;

        while(bfs()) {
            idx.clear(); idx.resize(sz);

            while(true) {
                int flo = dfs(sour, INT_MAX);

                if(flo == 0) break;

                mxf += flo;
            }
        }
    }
};

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    MF f; f.init(N*2 + 3);

    int sour = N*2 + 1, sink = N*2 + 2;

    int a = 0, b = 0;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        f.edge(sour, i, x);
        a += x;
    }

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        f.edge(N+i, sink, x);
        b += x;
    }

    if(a != b) {
        cout << -1 << "\n";
        return 0;
    }

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) f.edge(i, N+j, 1);

    f.mf(sour, sink);

    cout << 1 << "\n";

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) cout << f.flo[i][N+j];
        cout << "\n";
    }
}
