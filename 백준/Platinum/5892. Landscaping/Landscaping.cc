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

    int N, X, Y, Z; cin >> N >> X >> Y >> Z;

    vector<int> v(N+1), u(N+1);
    int vsum = 0, usum = 0;

    for(int i=1; i<=N; i++) {
        cin >> v[i] >> u[i];

        vsum += v[i];
        usum += u[i];
    }

    adj.clear();
    adj.resize(N+4);

    int ext = N+1, sour = N+2, sink = N+3;

    for(int i=1; i<=N; i++) {
        edge(sour, i, v[i], 0);
        edge(i, sink, u[i], 0);

        edge(i, ext, INT_MAX, Y);
        edge(ext, i, INT_MAX, X);

        for(int j=1; j<=N; j++)
            if(i != j) edge(i, j, INT_MAX, abs(i-j)*Z);
    }

    int ans = 0;

    if(vsum > usum) ans += (vsum - usum) * Y;
    else if(vsum < usum) ans += (usum - vsum) * X;

    maxf = 0, minc = 0;

    mcmf(sour, sink);

    ans += minc;

    cout << ans << "\n";
}
