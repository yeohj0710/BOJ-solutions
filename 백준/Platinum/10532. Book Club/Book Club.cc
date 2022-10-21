#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> l, r;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(r[y] == -1 || (!vis[r[y]] && f(r[y]))) {
            l[x] = y, r[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

        int N, M; cin >> N >> M;

        adj.resize(N);

        while(M--) {
            int a, b; cin >> a >> b;

            adj[a].push_back(b);
        }

        l.resize(N, -1);
        r.resize(N, -1);

        int match = 0;

        for(int i=0; i<N; i++) {
            vis.clear();
            vis.resize(N);

            if(f(i)) match++;
        }

        if(match == N) cout << "YES\n";
        else cout << "NO\n";
}
