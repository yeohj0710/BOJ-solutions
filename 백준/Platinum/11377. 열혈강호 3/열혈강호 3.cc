#include <bits/stdc++.h>
#define int long long
using namespace std;

struct se { int num, cap, ord; };
vector<vector<se>> adj;

void edge(int a, int b, int c) {
    adj[a].push_back({b, c, adj[b].size()});
    adj[b].push_back({a, 0, adj[a].size()-1});
}

int sz, sour, sink;
vector<int> lv, idx;

void init(int sz_) { sz = sz_; adj.resize(sz); }

bool bfs() {
    lv.clear(); lv.resize(sz, -1); lv[sour] = 0;

    queue<int> q; q.push(sour);

    while(!q.empty()) {
        int x = q.front(); q.pop();

        for(auto e : adj[x]) {
            int y = e.num, cap = e.cap;

            if(lv[y] != -1 || cap == 0) continue;

            lv[y] = lv[x] + 1;
            q.push(y);
        }
    }

    if(lv[sink] != -1) return true;
    else return false;
}

int dfs(int x, int flo) {
    if(x == sink) return flo;

    for(int &i=idx[x]; i<adj[x].size(); i++) {
        int y = adj[x][i].num, cap = adj[x][i].cap;

        if(lv[x] + 1 != lv[y] || cap == 0) continue;

        int sfl = dfs(y, min(flo, cap));

        if(sfl == 0) continue;

        adj[x][i].cap -= sfl;
        adj[y][adj[x][i].ord].cap += sfl;

        return sfl;
    }

    return 0;
}

int mf(int sour_, int sink_) {
    int maxf = 0; sour = sour_, sink = sink_;

    while(bfs()) {
        idx.clear(); idx.resize(sz);

        while(true) {
            int sfl = dfs(sour, INT_MAX);

            if(sfl == 0) break;

            maxf += sfl;
        }
    }

    return maxf;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    init(N+M+4);

    int sour = N+M+1, sink = N+M+2, ext = N+M+3;

    edge(sour, ext, K);

    for(int i=1; i<=N; i++) {
        edge(sour, i, 1);
        edge(ext, i, 1);

        int L; cin >> L;

        while(L--) {
            int x; cin >> x;

            edge(i, N+x, 1);
        }
    }

    for(int i=1; i<=M; i++) edge(N+i, sink, 1);

    cout << mf(sour, sink) << "\n";
}
