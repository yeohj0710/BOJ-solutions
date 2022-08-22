#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj, scc;
int ncnt = 0, ccnt = 0;
stack<int> s;
vector<int> nnum, cnum;
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

        while(true) {
            int y = s.top();
            s.pop();

            v.push_back(y);

            ch[y] = true;
            cnum[y] = ++ccnt;

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

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
    }

    nnum.resize(N+1);
    cnum.resize(N+1);
    ch.resize(N+1);

    for(int i=1; i<=N; i++)
        if(nnum[i] == 0) dfs(i);

    sort(scc.begin(), scc.end());

    cout << scc.size() << "\n";

    for(int i=0; i<scc.size(); i++) {
        for(int j=0; j<scc[i].size(); j++) cout << scc[i][j] << " ";
        cout << -1 << "\n";
    }
}
