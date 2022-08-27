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

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<vector<int>> u(N+1);

    for(int i=1; i<=M; i++) {
        int K; cin >> K;

        while(K--) {
            int x; cin >> x;

            u[x].push_back(i);
        }
    }

    adj.resize(M*2);

    for(int i=1; i<=N; i++) {
        int a = u[i][0]*2 - 1, b = u[i][1]*2 - 1;

        int na = a - 1, nb = b - 1;

        if(v[i] == 0) {
            adj[a].push_back(nb);
            adj[b].push_back(na);
            adj[na].push_back(b);
            adj[nb].push_back(a);
        }
        else {
            adj[a].push_back(b);
            adj[b].push_back(a);
            adj[na].push_back(nb);
            adj[nb].push_back(na);
        }
    }

    nnum.resize(M*2);
    cnum.resize(M*2);
    ch.resize(M*2);

    for(int i=0; i<M*2; i++)
        if(nnum[i] == 0) dfs(i);

    bool check = true;

    for(int i=0; i<M; i++) {
        if(cnum[i*2] == cnum[i*2 + 1]) {
            check = false;
            break;
        }
    }

    if(check) cout << 1 << "\n";
    else cout << 0 << "\n";
}
