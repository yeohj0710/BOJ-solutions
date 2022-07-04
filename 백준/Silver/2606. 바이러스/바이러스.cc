#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
int ans = 0;

void DFS(int x) {
    vis[x] = true;
    ans++;

    for(int i=0; i<adj[x].size(); i++) {
        int nex = adj[x][i];

        if(!vis[nex]) DFS(nex);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vis.resize(N+1);
    DFS(1);

    cout << ans-1 << "\n";
}
