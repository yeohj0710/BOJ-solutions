#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
vector<vector<int>> adj, dp;
vector<bool> vis;

void dfs(int x) {
    vis[x] = true;

    dp[x][0] = 0;
    dp[x][1] = v[x];

    for(int y : adj[x]) {
        if(vis[y]) continue;

        dfs(y);

        dp[x][0] += max(dp[y][0], dp[y][1]);
        dp[x][1] += dp[y][0];
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    adj.resize(N+1);
    for(int i=1; i<=N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dp.resize(N+1, vector<int>(2));
    vis.resize(N+1);

    dfs(1);

    int ans = max(dp[1][0], dp[1][1]);

    cout << ans << "\n";
}
