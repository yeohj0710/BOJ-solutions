#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> v, ans;

void dfs(int x, int add) {
    ans[x] += add;

    for(int i=0; i<adj[x].size(); i++) dfs(adj[x][i], add);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        if(x >= 1) adj[x].push_back(i);
    }

    v.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        v[a] += b;
    }

    ans.resize(N+1);

    for(int i=1; i<=N; i++)
        if(v[i] > 0) dfs(i, v[i]);

    for(int i=1; i<=N; i++) cout << ans[i] << " ";
    cout << "\n";
}
