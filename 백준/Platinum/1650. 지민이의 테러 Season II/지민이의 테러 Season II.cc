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

int mcmf(int sour, int sink) {
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
    if(pre[sink] == -1) return 0;

    int sfl = INT_MAX;

    for(int i=sink; i!=sour; i=pre[i]) {
        int a = pre[i], b = idx[i];

        sfl = min(sfl, adj[a][b].cap);
    }

    sfl = 1;

    for(int i=sink; i!=sour; i=pre[i]) {
        int a = pre[i], b = idx[i];

        adj[a][b].cap -= sfl;
        adj[i][adj[a][b].ord].cap += sfl;

        minc += sfl * adj[a][b].sco;
    }

    maxf += sfl;

    return tco[sink];
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.clear();
    adj.resize(N*2 + 1);

    int sour = 1, sink = N+N;

    for(int i=1; i<=N; i++) edge(i, N+i, INT_MAX, 0);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        edge(N+a, b, 1, c);
        edge(N+b, a, 1, c);
    }

    int ans = 0;

    for(int i=0; i<2; i++) {
        maxf = 0, minc = 0;
        ans += mcmf(sour, sink);
    }

    cout << ans << "\n";
}
