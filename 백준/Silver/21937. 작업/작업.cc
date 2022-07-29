#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[y]) f(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[b].push_back(a);
    }

    int K; cin >> K;

    vis.resize(N+1);

    f(K);

    int ans = 0;
    for(int i=1; i<=N; i++)
        if(vis[i] && i != K) ans++;

    cout << ans << "\n";
}
