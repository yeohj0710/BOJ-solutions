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

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ":\n";

        int N; cin >> N;

        adj.clear();
        adj.resize(N+1);

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            adj[x].push_back(i);
        }

        for(int i=1; i<=N; i++) {
            vis.clear();
            vis.resize(N+1);

            f(i);

            int ans = 0;
            for(int i=1; i<=N; i++)
                if(vis[i]) ans++;

            cout << ans << "\n";
        }
    }
}
