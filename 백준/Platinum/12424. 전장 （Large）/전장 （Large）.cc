#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj, cap, flo, sco;
int maxf, minc;

void init(int S) {
    adj.clear(); adj.resize(S);
    cap.clear(); cap.resize(S, vector<int>(S));
    flo.clear(); flo.resize(S, vector<int>(S));
    sco.clear(); sco.resize(S, vector<int>(S));
}

void edge(int a, int b, int c, int d) {
    adj[a].push_back(b);
    adj[b].push_back(a);
    cap[a][b] = c;
    sco[a][b] = d;
    sco[b][a] = -d;
}

void mcmf(int sour, int sink) {
    while(true) {
        vector<int> pre(adj.size(), -1);

        vector<int> tco(adj.size(), LLONG_MAX);
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
                int y = adj[x][i];

                if(cap[x][y] - flo[x][y] <= 0) continue;
                if(tco[x] + sco[x][y] >= tco[y]) continue;

                tco[y] = tco[x] + sco[x][y];
                pre[y] = x;

                if(inq[y]) continue;

                q.push(y);
                inq[y] = true;
            }
        }
        if(pre[sink] == -1) break;

        int sfl = LLONG_MAX;

        for(int i=sink; i!=sour; i=pre[i])
            sfl = min(sfl, cap[pre[i]][i] - flo[pre[i]][i]);

        for(int i=sink; i!=sour; i=pre[i]) {
            flo[pre[i]][i] += sfl;
            flo[i][pre[i]] -= sfl;

            minc += sfl * sco[pre[i]][i];
        }

        maxf++;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        init(9);

        int sour = 7, sink = 8;

        vector<int> v(7);
        for(int i=1; i<=6; i++) cin >> v[i];

        for(int i=1; i<=3; i++) edge(sour, i, v[i], 0);
        for(int i=4; i<=6; i++) edge(i, sink, v[i], 0);

        for(int i=1; i<=3; i++)
            for(int j=4; j<=6; j++) {
                int x; cin >> x;

                edge(i, j, LLONG_MAX, -x);
            }

        maxf = 0, minc = 0;

        mcmf(sour, sink);

        cout << "Case #" << t << ": " << -minc << "\n";
    }
}
