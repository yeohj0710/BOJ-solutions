#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj, scc;
vector<int> nnum, cnum;
int ncnt = 0, ccnt = 0;

stack<int> s;
vector<bool> ch;

int y(int x) {
    if(x < 0) return (-x)*2 - 2;
    else return x*2 - 1;
}

int n(int x) {
    x = y(x);

    if(x % 2 == 0) return x + 1;
    else return x - 1;
}

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
    vector<vector<int>> u(N+1, vector<int>(N));

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        for(int j=1; j<=N-1; j++) cin >> u[i][j];
    }

    int l = 0, r = N-1, ans = N-1;
    int M = N * 3;

    while(l <= r) {
        int m = (l + r) / 2;

        adj.clear(); adj.resize(M*2);

        for(int i=1; i<=N; i++) {
            adj[y(v[i]*N + i)].push_back(n(v[i]*N + i));

            int a = ((v[i] + 1) % 3)*N + i;
            int b = ((v[i] + 2) % 3)*N + i;

            adj[n(a)].push_back(y(b));
            adj[n(b)].push_back(y(a));

            for(int j=m+1; j<=N-1; j++)
                for(int k=0; k<3; k++) {
                    if(k == v[i]) continue;

                    adj[y(k*N + i)].push_back(n(k*N + u[i][j]));
                    adj[y(k*N + u[i][j])].push_back(n(k*N + i));
                }
        }

        nnum.clear(); nnum.resize(M*2);
        cnum.clear(); cnum.resize(M*2);
        ch.clear();   ch.resize(M*2);

        scc.clear();
        ncnt = ccnt = 0;

        for(int i=0; i<M*2; i++)
            if(nnum[i] == 0) dfs(i);

        bool check = true;

        for(int i=0; i<M; i++) {
            if(cnum[i*2] == cnum[i*2 + 1]) {
                check = false;
                break;
            }
        }

        if(check) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
