#include <bits/stdc++.h>
#define int long long
using namespace std;

struct MCMF {
    struct se { int num, cap, sco, ord; };
    vector<vector<se>> adj;

    void edge(int a, int b, int c, int d) {
        adj[a].push_back({b, c, d, adj[b].size()});
        adj[b].push_back({a, 0, -d, adj[a].size()-1});
    }

    int mcmf(int sour, int sink, int amount) {
        int maxf = 0, minc = 0;

        while(amount--) {
            vector<int> pre(adj.size(), -1), idx(adj.size(), -1);

            vector<int> tco(adj.size(), INT_MAX);
            tco[sour] = 0;

            queue<int> q;
            q.push(sour);

            vector<bool> inq(adj.size());
            inq[sour] = true;

            while(!q.empty()) {
                int x = q.front();
                q.pop();
                inq[x] = false;

                for(int i=0; i<adj[x].size(); i++) {
                    int y = adj[x][i].num;
                    int cap = adj[x][i].cap;
                    int sco = adj[x][i].sco;

                    if(cap <= 0 || tco[x] + sco >= tco[y]) continue;

                    tco[y] = tco[x] + sco;
                    pre[y] = x;
                    idx[y] = i;

                    if(inq[y]) continue;

                    q.push(y);
                    inq[y] = true;
                }
            }
            if(pre[sink] == -1) break;

            int sfl = INT_MAX;

            for(int i=sink; i!=sour; i=pre[i]) {
                int a = pre[i], b = idx[i];

                sfl = min(sfl, adj[a][b].cap);
            }

            for(int i=sink; i!=sour; i=pre[i]) {
                int a = pre[i], b = idx[i];

                adj[a][b].cap -= sfl;
                adj[i][adj[a][b].ord].cap += sfl;

                minc += sfl * adj[a][b].sco;
            }

            maxf += sfl;
        }

        return minc;
    }
};

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        MCMF f; f.adj.resize(N+3);

        while(M--) {
            int a, b; cin >> a >> b;

            f.edge(a, b, INT_MAX, 1);
            f.edge(b, a, INT_MAX, 1);
        }

        int sour = N+1, sink = N+2, cnt = 0;

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            if(x == 1) cnt++, f.edge(sour, i, 1, 0);
        }

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            if(x == 1) f.edge(i, sink, 1, 0);
        }

        cout << f.mcmf(sour, sink, cnt) << "\n";
    }
}
