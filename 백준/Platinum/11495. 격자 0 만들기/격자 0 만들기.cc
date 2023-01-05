#include <bits/stdc++.h>
#define int long long
using namespace std;

struct MF {
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
};

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        MF f; f.init(N*M + 3);

        int sour = N*M + 1, sink = N*M + 2;

        struct s { int num, val; }; vector<s> v, u;
        int sum = 0;

        for(int i=1; i<=N; i++)
            for(int j=1; j<=M; j++) {
                int x; cin >> x;

                sum += x;

                if((i + j) % 2 == 0) v.push_back({(i-1)*M + j, x});
                else u.push_back({(i-1)*M + j, x});
            }

        for(int i=0; i<v.size(); i++) f.edge(sour, v[i].num, v[i].val);
        for(int i=0; i<u.size(); i++) f.edge(u[i].num, sink, u[i].val);

        for(int i=0; i<v.size(); i++)
            for(int j=0; j<u.size(); j++) {
                int ax = (v[i].num - 1) / M + 1, ay = (v[i].num - 1) % M + 1;
                int bx = (u[j].num - 1) / M + 1, by = (u[j].num - 1) % M + 1;

                if(abs(ax - bx) + abs(ay - by) > 1) continue;

                f.edge(v[i].num, u[j].num, INT_MAX);
            }

        int maxf = f.mf(sour, sink);

        cout << maxf + (sum - maxf*2) << "\n";
    }
}
