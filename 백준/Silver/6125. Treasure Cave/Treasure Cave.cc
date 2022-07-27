#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, K;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> v;

void f(int x) {
    vis[x] = true;
    v.push_back(x);

    if(x == K) {
        cout << v.size() << "\n";

        for(int i=0; i<v.size(); i++) cout << v[i] << "\n";

        return;
    }

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[y]) f(y);
    }

    vis[x] = false;
    v.pop_back();
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M >> K;

    adj.resize(N+1);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back(b);
        adj[a].push_back(c);
    }

    vis.resize(N+1);

    f(1);
}
