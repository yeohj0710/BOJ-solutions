#include <bits/stdc++.h>
#define int long long
using namespace std;

struct sm {
	// referred to the jhnah917's implementation (purpose of study)

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

        tco.resize(adj.size(), INT_MAX);
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
                int cur = dfs(sour, INT_MAX);
                if(cur == 0) break;

                minc += tco[sink] * cur;
                maxf += cur;

                chk.clear(); chk.resize(adj.size());
            }

            int Min = INT_MAX;

            for(int i=0; i<adj.size(); i++) {
                if(!chk[i]) continue;

                for(int j=0; j<adj[i].size(); j++) {
                    int x = adj[i][j].num;
                    int cap = adj[i][j].cap;
                    int sco = adj[i][j].sco;

                    if(cap > 0 && !chk[x]) Min = min(Min, tco[i] + sco - tco[x]);
                }
            }

            if(Min == INT_MAX) break;

            for(int i=0; i<adj.size(); i++)
                if(!chk[i]) tco[i] += Min;
        }

        return {minc, maxf};
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N+1, vector<char>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    sm f;

    f.adj.resize(N*M + 3);

    int sour = N*M + 1, sink = N*M + 2;

    int cvt[6][6] = {{10, 8, 7, 5, 0, 1},
                      {8, 6, 4, 3, 0, 1},
                      {7, 4, 3, 2, 0, 1},
                      {5, 3, 2, 2, 0, 1},
                      {0, 0, 0, 0, 0, 0},
                      {1, 1, 1, 1, 0, 0}};

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            if((i + j) % 2 == 0) {
                f.edge(sour, (i-1)*M + j, 1, 0);
                f.edge((i-1)*M + j, sink, 1, 0);

                int di[4] = {1, -1, 0, 0};
                int dj[4] = {0, 0, 1, -1};

                for(int k=0; k<4; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];

                    if(ni < 1 || nj < 1 || ni > N || nj > M) continue;

                    f.edge((i-1)*M + j, (ni-1)*M + nj, 1, -cvt[v[i][j]-'A'][v[ni][nj]-'A']);
                }
            }
            else f.edge((i-1)*M + j, sink, 1, 0);
        }


    pair<int, int> mcmf = f.mcmf(sour, sink);

    int minc = mcmf.first;
    int maxf = mcmf.second;

    cout << -minc << "\n";
}
