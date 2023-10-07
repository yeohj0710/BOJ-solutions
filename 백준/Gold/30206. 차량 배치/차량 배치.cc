#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q; q.push(1);
    vector<int> dis(N+1, -1); dis[1] = 1;
    vector<int> cnt(N+1); cnt[1] = 1;

    while(!q.empty()) {
        int x = q.front(); q.pop();

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            if(dis[y] != -1) continue;

            dis[y] = dis[x] + 1;
            cnt[dis[y]]++;
            q.push(y);
        }
    }

    int ans = 1, mod = 1e9 + 7;

    for(int i=1; i<=N; i++) ans = (ans * (cnt[i] + 1)) % mod;

    ans--;

    cout << ans << "\n";
}
