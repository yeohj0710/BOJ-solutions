#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> v, vis;

int f(int x) {
    if(v[x] != 0) return v[x];

    vis[x] = true;

    int cnt = 1;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(vis[y]) continue;

        cnt += f(y);
    }

    return v[x] = cnt;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    v.resize(N+1);
    vis.resize(N+1);

    f(M);

    while(K--) {
        int x; cin >> x;

        cout << v[x] << "\n";
    }
}
