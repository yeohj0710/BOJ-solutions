#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
vector<int> v, u;

void DFS(int x) {
    vis[x] = true;
    v.push_back(x);

    for(int i=0; i<adj[x].size(); i++) {
        int nex = adj[x][i];

        if(!vis[nex]) DFS(nex);
    }
}

void BFS(int x) {
    vis[x] = true;

    queue<int> q;
    q.push(x);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        vis[cur] = true;
        u.push_back(cur);

        for(int i=0; i<adj[cur].size(); i++) {
            int nex = adj[cur][i];

            if(vis[nex]) continue;

            q.push(nex);
            vis[nex] = true;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=N; i++)
        sort(adj[i].begin(), adj[i].end());

    vis.resize(N+1);

    DFS(K);

    for(int i=1; i<=N; i++) vis[i] = false;

    BFS(K);

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
