#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> vis;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);

    int M; cin >> M;

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vis.resize(N+1, -1);
    vis[1] = 0;

    queue<int> q;
    q.push(1);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            if(vis[y] != -1) continue;

            vis[y] = vis[x] + 1;
            q.push(y);
        }
    }

    int ans = 0;
    for(int i=1; i<=N; i++)
        if(vis[i] == 1 || vis[i] == 2) ans++;

    cout << ans << "\n";
}
