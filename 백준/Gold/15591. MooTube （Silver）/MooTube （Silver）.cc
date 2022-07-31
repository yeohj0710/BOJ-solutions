#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<pair<int, int>>> adj(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    while(M--) {
        int a, b; cin >> a >> b;

        vector<bool> vis(N+1);
        vis[b] = true;

        queue<int> q;
        q.push(b);

        int ans = 0;

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int i=0; i<adj[x].size(); i++) {
                int y = adj[x][i].first;

                if(vis[y]) continue;
                if(adj[x][i].second < a) continue;

                vis[y] = true;
                q.push(y);
                ans++;
            }
        }

        cout << ans << "\n";
    }
}
