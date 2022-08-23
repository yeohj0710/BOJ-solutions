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

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    adj.resize(N+1);

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            char c; cin >> c;

            if(c == '1') adj[i].push_back(j);
        }

    nnum.resize(N+1);
    cnum.resize(N+1);
    ch.resize(N+1);

    for(int i=1; i<=N; i++)
        if(nnum[i] == 0) dfs(i);

    sort(scc.begin(), scc.end());

    int ans = 0;

    for(int i=0; i<scc.size(); i++) {
        int Min = INT_MAX;

        for(int j=0; j<scc[i].size(); j++)
            Min = min(Min, v[scc[i][j]]);

        ans += Min;
    }

    cout << ans << "\n";
}
