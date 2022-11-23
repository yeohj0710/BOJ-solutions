#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj, scc;
vector<int> nnum, cnum;
int ncnt = 0, ccnt = 0;

stack<int> s;
vector<bool> ch;

int dfs(int x) {
    nnum[x] = ++ncnt;
    s.push(x);

    int tmp = nnum[x];

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(nnum[y] == 0) tmp = min(tmp, dfs(y));
        else if(!ch[y]) tmp = min(tmp, nnum[y]);
    }

    if(tmp == nnum[x]) {
        vector<int> v;
        ccnt++;

        while(true) {
            int y = s.top();
            s.pop();

            v.push_back(y);

            ch[y] = true;
            cnum[y] = ccnt;

            if(y == x) break;
        }

        sort(v.begin(), v.end());

        scc.push_back(v);
    }

    return tmp;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        adj.clear(); adj.resize(N+1);

        while(M--) {
            int a, b, c; cin >> a >> b >> c;

            adj[a].push_back(b);

            if(c == 2) adj[b].push_back(a);
        }

        nnum.clear(); nnum.resize(N+1);
        cnum.clear(); cnum.resize(N+1);
        ch.clear();   ch.resize(N+1);

        scc.clear();
        ncnt = ccnt = 0;

        for(int i=1; i<=N; i++)
            if(nnum[i] == 0) dfs(i);

        sort(scc.begin(), scc.end());

        if(scc.size() == 1) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
