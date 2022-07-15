#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

vector<int> ans;
int cnt = 1;

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
        sort(adj[i].begin(), adj[i].end(), greater<int>());

    vis.resize(N+1, false);
    vis[K] = true;

    queue<int> q;
    q.push(K);

    ans.resize(N+1);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        ans[x] = cnt++;

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            if(vis[y]) continue;

            q.push(y);
            vis[y] = true;
        }
    }

    for(int i=1; i<=N; i++) cout << ans[i] << "\n";
}
