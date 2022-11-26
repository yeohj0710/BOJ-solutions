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

    int N, M; cin >> N >> M;

    adj.clear();
    adj.resize(N*N*2 + 1);

    int sour = 1, sink = N*N*2;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            int x; cin >> x;

            edge((i-1)*N + j, N*N + (i-1)*N + j, 1, -x);
            edge((i-1)*N + j, N*N + (i-1)*N + j, M-1, 0);

            if(i+1 <= N) edge(N*N + (i-1)*N + j, i*N + j, M, 0);
            if(j+1 <= N) edge(N*N + (i-1)*N + j, (i-1)*N + j+1, M, 0);
        }

    maxf = 0, minc = 0;

    mcmf(sour, sink);

    cout << -minc << "\n";
}
