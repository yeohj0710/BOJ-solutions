#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> adj(N+1);
    vector<bool> vis(N+1);
    vector<int> v(M);

    for(int i=0; i<M; i++) cin >> v[i];

    while(K--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ans = 0;

    for(int i=0; i<M; i++) {
        if(vis[v[i]]) continue;

        queue<int> q; q.push(v[i]);
        ans++, vis[v[i]] = true;

        while(!q.empty()) {
            int x = q.front(); q.pop();

            for(int j=0; j<adj[x].size(); j++) {
                int y = adj[x][j];

                if(vis[y]) continue;

                ans++;
                q.push(y);
                vis[y] = true;
            }
        }
    }

    cout << ans << "\n";
}
