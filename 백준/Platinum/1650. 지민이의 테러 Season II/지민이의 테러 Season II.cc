#include <bits/stdc++.h>
#define int long long
using namespace std;

struct se {
    int num, cap, sco, ord;

    se(int num, int cap, int sco, int ord) : num(num), cap(cap), sco(sco), ord(ord) {}
};

vector<vector<se>> adj;
int maxf, minc;

void edge(int a, int b, int c, int d) {
    adj[a].emplace_back(b, c, d, adj[b].size());
    adj[b].emplace_back(a, 0, -d, adj[a].size()-1);
}

void mcmf(int sour, int sink) {
    while(true) {
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
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.clear();
    adj.resize(N*2 + 3);

    int sour = N*2 + 1, sink = N*2 + 2;

    edge(sour, 1, 2, 0);
    edge(N+N, sink, 2, 0);

    for(int i=1; i<=N; i++) edge(i, N+i, INT_MAX, 0);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        edge(N+a, b, 1, c);
        edge(N+b, a, 1 ,c);
    }

    maxf = 0, minc = 0;

    mcmf(sour, sink);

    cout << minc << "\n";
}
