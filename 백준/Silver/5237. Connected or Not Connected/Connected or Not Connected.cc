#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;

void f(int curr) {
    vis[curr] = true;

    for(int i=0; i<adj[curr].size(); i++) {
        int next = adj[curr][i];

        if(!vis[next]) f(next);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, K; cin >> N >> K;

        adj.clear();
        adj.resize(N);

        vis.clear();
        vis.resize(N, false);

        while(K--) {
            int x, y; cin >> x >> y;

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        f(0);

        bool check = true;
        for(int i=0; i<N; i++)
            if(!vis[i]) check = false;

        if(check) cout << "Connected.\n";
        else cout << "Not connected.\n";
    }
}
