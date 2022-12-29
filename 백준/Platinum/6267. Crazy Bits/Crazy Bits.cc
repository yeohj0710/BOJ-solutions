#include <bits/stdc++.h>
using namespace std;

struct MCMF {
    struct se { int num, cap, sco, ord; };
    vector<vector<se>> adj;

    void edge(int a, int b, int c, int d) {
        adj[a].push_back({b, c, d, adj[b].size()});
        adj[b].push_back({a, 0, -d, adj[a].size()-1});
    }

    int sour, sink;
    vector<int> tco, idx;
    vector<bool> chk;

    int dfs(int x, int flo) {
        chk[x] = true;

        if(x == sink) return flo;

        for(; idx[x] < adj[x].size(); idx[x]++) {
            se &ad = adj[x][idx[x]];

            if(chk[ad.num] || tco[x] + ad.sco != tco[ad.num] || ad.cap == 0) continue;

            int ret = dfs(ad.num, min(flo, ad.cap));

            if(ret == 0) continue;

            ad.cap -= ret;
            adj[ad.num][ad.ord].cap += ret;

            return ret;
        }

        return 0;
    }

    pair<int, int> mcmf(int sour_, int sink_) {
        sour = sour_, sink = sink_;

        int minc = 0, maxf = 0;

        tco.resize(adj.size(), 1e6);
        tco[sour] = 0;

        queue<int> q;
        q.push(sour);

        vector<bool> inq(adj.size());
        inq[sour] = true;

        while(!q.empty()) {
            int x = q.front();
            q.pop(); inq[x] = false;

            for(int i=0; i<adj[x].size(); i++) {
                int y = adj[x][i].num;
                int cap = adj[x][i].cap;
                int sco = adj[x][i].sco;

                if(cap <= 0 || tco[x] + sco >= tco[y]) continue;

                tco[y] = tco[x] + sco;

                if(inq[y]) continue;

                q.push(y);
                inq[y] = true;
            }
        }

        while(true) {
            chk.clear(); chk.resize(adj.size());
            idx.clear(); idx.resize(adj.size());

            while(true) {
                int cur = dfs(sour, 1e6);
                if(cur == 0) break;

                minc += tco[sink] * cur;
                maxf += cur;

                chk.clear(); chk.resize(adj.size());
            }

            int Min = 1e6;

            for(int i=0; i<adj.size(); i++) {
                if(!chk[i]) continue;

                for(int j=0; j<adj[i].size(); j++) {
                    int x = adj[i][j].num;
                    int cap = adj[i][j].cap;
                    int sco = adj[i][j].sco;

                    if(cap > 0 && !chk[x]) Min = min(Min, tco[i] + sco - tco[x]);
                }
            }

            if(Min == 1e6) break;

            for(int i=0; i<adj.size(); i++)
                if(!chk[i]) tco[i] += Min;
        }

        return {minc, maxf};
    }
};

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> vv(16), uu(16);
        for(int i=0; i<N; i++) cin >> vv[i];
        for(int i=0; i<N; i++) cin >> uu[i];

        vector<bitset<16>> v(N), u(N);
        for(int i=0; i<N; i++) v[i] = vv[i], u[i] = uu[i];

        int vbit = 0, ubit = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<16; j++) vbit += v[i][j], ubit += u[i][j];

        if(vbit != ubit) {
            cout << "Impossible\n";
            continue;
        }

        MCMF f; f.adj.resize(N*16+3);

        int sour = f.adj.size()-2, sink = f.adj.size()-1;

        for(int i=0; i<N; i++)
            for(int j=0; j<16; j++) {
                if(v[i][j] == 1) f.edge(sour, i*16+j+1, 1, 0);
                if(u[i][j] == 1) f.edge(i*16+j+1, sink, 1, 0);
            }

        for(int i=0; i<N; i++)
            for(int j=0; j<16; j++)
                for(int k=0; k<N; k++)
                    for(int l=0; l<16; l++) f.edge(i*16+j+1, k*16+l+1, 1, abs(i-k)+abs(j-l));

        pair<int, int> mcmf = f.mcmf(sour, sink);

        int minc = mcmf.first;

        cout << minc << "\n";
    }
}
