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

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
    }

    for(int i=1; i<=N; i++) {
        bool check = true;

        for(int j=1; j<=N; j++) {
            vis.clear();
            vis.resize(N+1);

            f(j);

            if(!vis[i]) check = false;
        }

        if(check) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
