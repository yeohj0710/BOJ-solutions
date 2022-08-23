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
        int N = 26;

        int M; cin >> M;
        if(M == 0) break;

        adj.clear();
        adj.resize(N+1);

        vector<bool> u(N+1);

        while(M--) {
            vector<char> v(6);
            for(int i=0; i<6; i++) {
                cin >> v[i];

                u[v[i]-'A'+1] = true;
            }

            for(int i=0; i<6; i++) {
                if(v[i] == v[5]) continue;

                adj[v[i]-'A'+1].push_back(v[5]-'A'+1);
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

        for(int i=0; i<scc.size(); i++) {
            if(!u[scc[i][0]]) continue;

            for(int j=0; j<scc[i].size(); j++) cout << char('A' + scc[i][j] - 1) << " ";
            cout << "\n";
        }

        cout << "\n";
    }
}
