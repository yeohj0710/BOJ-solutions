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

    int N, M;

    while(cin >> N >> M) {
        adj.clear(); adj.resize(N*2);

        while(M--) {
            int a, b; cin >> a >> b;

            if(a < 0) a = (-a)*2 - 2;
            else a = a*2 - 1;

            if(b < 0) b = (-b)*2 - 2;
            else b = b*2 - 1;

            int na, nb;

            if(a % 2 == 0) na = a + 1;
            else na = a - 1;

            if(b % 2 == 0) nb = b + 1;
            else nb = b - 1;

            adj[na].push_back(b);
            adj[nb].push_back(a);
        }

        nnum.clear(); nnum.resize(N*2);
        cnum.clear(); cnum.resize(N*2);
        ch.clear();   ch.resize(N*2);

        for(int i=0; i<N*2; i++)
            if(nnum[i] == 0) dfs(i);

        bool check = true;

        for(int i=0; i<N; i++) {
            if(cnum[i*2] == cnum[i*2 + 1]) {
                check = false;
                break;
            }
        }

        if(check) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
