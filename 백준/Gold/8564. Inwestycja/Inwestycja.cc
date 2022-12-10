#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> v;

void dfs(int x, int pre) {
    for(int y : adj[x]) {
        if(y == pre) continue;

        dfs(y, x);
        v[x] += v[y];
    }

    v[x]++;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    v.resize(N+1);

    dfs(1, 0);

    int ans = 0;
    for(int i=1; i<=N; i++) ans = max(ans, v[i] * (N - v[i]));

    cout << ans << "\n";
}
