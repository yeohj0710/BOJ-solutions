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

    while(true) {
        int N, M; cin >> M >> N;
        if(N == 0 && M == 0) break;

        adj.clear();
        adj.resize(N+M+3);

        int sour = N+M+1, sink = N+M+2;

        for(int i=1; i<=M; i++) {
            int x; cin >> x;

            edge(N+i, sink, x, 0);
        }

        for(int i=1; i<=N; i++) {
            edge(sour, i, 1, 0);

            int a; cin >> a;

            for(int j=0; j<4; j++) {
                int b; cin >> b;

                edge(i, N+b+1, 1, -(a*4-j));
            }
        }

        maxf = minc = 0;

        mcmf(sour, sink);

        cout << -minc << "\n";
    }
}
