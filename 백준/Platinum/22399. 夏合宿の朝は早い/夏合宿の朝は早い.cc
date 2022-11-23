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

    cout << fixed;
    cout.precision(5);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<double> v(N+1);

        adj.clear();
        adj.resize(N+1);

        for(int i=1; i<=N; i++) {
            cin >> v[i];

            int M; cin >> M;

            while(M--) {
                int x; cin >> x;

                adj[i].push_back(x);
            }
        }

        nnum.clear();   nnum.resize(N+1);
        cnum.clear();   cnum.resize(N+1);
        ch.clear();     ch.resize(N+1);

        scc.clear();
        ncnt = ccnt = 0;

        for(int i=1; i<=N; i++)
            if(nnum[i] == 0) dfs(i);

        sort(scc.begin(), scc.end());

        vector<int> ind(N+1);

        for(int i=1; i<=N; i++)
            for(int j=0; j<adj[i].size(); j++) {
                int x = adj[i][j];

                if(cnum[i] != cnum[x]) ind[cnum[x]]++;
            }

        double ans = 1;

        for(int i=1; i<=ccnt; i++)
            if(ind[i] == 0) {
                double tmp = 1;

                for(int j=1; j<=N; j++)
                    if(cnum[j] == i) tmp *= v[j];

                ans *= (1 - tmp);
            }

        cout << ans << "\n";
    }
}
