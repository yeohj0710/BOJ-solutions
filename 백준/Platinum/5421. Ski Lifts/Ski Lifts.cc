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

    int T; cin >> T;

    while(T--) {
        int R, C; cin >> R >> C;

        vector<vector<int>> v(R+1, vector<int>(C+1));

        for(int i=1; i<=R; i++)
            for(int j=1; j<=C; j++) cin >> v[i][j];

        int N = R * C;

        adj.clear();
        adj.resize(N+1);

        for(int i=1; i<=R; i++)
            for(int j=1; j<=C; j++) {
                int a = (i-1)*C + j;

                if(i+1 <= R) {
                    int b = i*C + j;

                    if(v[i][j] > v[i+1][j]) adj[a].push_back(b);
                    else if(v[i][j] < v[i+1][j]) adj[b].push_back(a);
                    else adj[a].push_back(b), adj[b].push_back(a);
                }
                if(j+1 <= C) {
                    int b = (i-1)*C + (j+1);

                    if(v[i][j] > v[i][j+1]) adj[a].push_back(b);
                    else if(v[i][j] < v[i][j+1]) adj[b].push_back(a);
                    else adj[a].push_back(b), adj[b].push_back(a);
                }
            }

        nnum.clear();   nnum.resize(N+1);
        cnum.clear();   cnum.resize(N+1);
        ch.clear();     ch.resize(N+1);

        scc.clear();
        ncnt = ccnt = 0;

        for(int i=1; i<=N; i++)
            if(nnum[i] == 0) dfs(i);

        if(ccnt == 1) {
            cout << 0 << "\n";
            continue;
        }

        sort(scc.begin(), scc.end());

        vector<int> ind(N+1), oud(N+1);

        for(int i=1; i<=N; i++)
            for(int j=0; j<adj[i].size(); j++) {
                int x = adj[i][j];

                if(cnum[i] != cnum[x]) {
                    ind[cnum[x]]++;
                    oud[cnum[i]]++;
                }
            }

        int high = 0, low = 0;

        for(int i=1; i<=ccnt; i++) {
            if(ind[i] == 0) high++;
            if(oud[i] == 0) low++;
        }

        int ans = max(high, low);

        cout << ans << "\n";
    }
}
