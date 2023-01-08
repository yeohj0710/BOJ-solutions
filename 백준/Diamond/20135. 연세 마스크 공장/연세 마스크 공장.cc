#include <bits/stdc++.h>
#define int long long
using namespace std;

struct MF {
    struct se { int num, cap, ord, idx; };
    vector<vector<se>> adj;

    void edge(int a, int b, int c, int d) {
        adj[a].push_back({b, c, adj[b].size(), d});
        adj[b].push_back({a, 0, adj[a].size()-1, 0});
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
};

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> p(N+1);
    for(int i=1; i<=N; i++) cin >> p[i], p[i] *= -1;

    struct s { int s, e, l, r; }; vector<s> v(M+1);

    for(int i=1; i<=M; i++) {
        cin >> v[i].s >> v[i].e >> v[i].l >> v[i].r;

        p[v[i].s] += v[i].l;
        p[v[i].e] -= v[i].l;
    }

    int psum = 0, msum = 0;

    for(int i=1; i<=N; i++) {
        if(p[i] > 0) psum += p[i];
        else msum += p[i];
    }

    if(psum != abs(msum)) {
        cout << -1 << "\n";
        return 0;
    }

    MF f; f.init(N+3);

    int sour = N+1, sink = N+2;

    for(int i=1; i<=N; i++) {
        if(p[i] < 0) f.edge(sour, i, abs(p[i]), 0);
        else if(p[i] > 0) f.edge(i, sink, p[i], 0);
    }

    for(int i=1; i<=M; i++)
        f.edge(v[i].s, v[i].e, v[i].r-v[i].l, i);

    if(f.mf(sour, sink) != psum) {
        cout << -1 << "\n";
        return 0;
    }

    vector<int> ans(M+1);

    for(int i=1; i<=N; i++)
        for(auto e : f.adj[i])
            if(e.idx > 0) ans[e.idx] = (v[e.idx].r - v[e.idx].l) - e.cap;

    for(int i=1; i<=M; i++) ans[i] += v[i].l;

    cout << 1 << "\n";

    for(int i=1; i<=M; i++) cout << ans[i] << "\n";
}
