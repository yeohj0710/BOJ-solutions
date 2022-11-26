#include <bits/stdc++.h>
#define int long long
using namespace std;

struct se {
    int num, ord, cap, sco;

    se(int num, int ord, int cap, int sco) : num(num), ord(ord), cap(cap), sco(sco) {}
};

vector<vector<se>> adj;
int maxf, minc;

void edge(int a, int b, int c, int d) {
    adj[a].emplace_back(b, adj[b].size(), c, d);
    adj[b].emplace_back(a, adj[a].size()-1, 0, -d);
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

    int T = 1;

    while(T--) {
        int N, M; cin >> N >> M;

        adj.clear();
        adj.resize(N+M+3);

        int sour = N+M+1, sink = N+M+2;

        for(int i=1; i<=N; i++) {
            edge(sour, i, 1, 0);

            int K; cin >> K;

            while(K--) {
                int a, b; cin >> a >> b;

                edge(i, N+a, 1, b);
            }
        }

        for(int i=N+1; i<=N+M; i++) edge(i, sink, 1, 0);

        maxf = 0, minc = 0;

        mcmf(sour, sink);

        cout << maxf << "\n";
        cout << minc << "\n";
    }
}
