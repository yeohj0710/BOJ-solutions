#include <bits/stdc++.h>
#define int long long
using namespace std;

struct EulerianPath {
    vector<vector<int>> adj;
    int N, M, start = 0;

    void init() {
        cin >> N >> M;

        adj.resize(N+1);

        while(M--) {
            int a, b; cin >> a >> b;

            adj[a].push_back(b);
            adj[a].push_back(b);
            adj[b].push_back(a);
            adj[b].push_back(a);
        }

        for(int i=1; i<=N; i++)
            sort(adj[i].begin(), adj[i].end());
    }

    bool exist() {
        for(int i=1; i<=N; i++) {
            if(adj[i].size() % 2 == 1) return false;

            if(start == 0 && adj[i].size() > 0) start = i;
        }

        return true;
    }

    void dfs(int x) {
        while(!adj[x].empty()) {
            int y = adj[x][0];

            int z = lower_bound(adj[y].begin(), adj[y].end(), x) - adj[y].begin();

            adj[x].erase(adj[x].begin());
            adj[y].erase(adj[y].begin() + z);

            dfs(y);
        }

        cout << x << "\n";
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    EulerianPath f; f.init();

    if(!f.exist()) {
        cout << -1 << "\n";
        return 0;
    }

    f.dfs(f.start);
}
