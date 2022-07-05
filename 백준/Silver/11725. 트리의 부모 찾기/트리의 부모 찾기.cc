#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> par;

void f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[y]) {
            par[y] = x;
            f(y);
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    par.resize(N+1);
    for(int i=1; i<=N; i++) par[i] = i;

    vis.resize(N+1);
    f(1);

    for(int i=2 ;i<=N; i++) cout << par[i] << "\n";
}
