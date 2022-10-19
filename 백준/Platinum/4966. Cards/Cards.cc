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

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<int> v(N), u(M);

        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<M; i++) cin >> u[i];

        adj.clear();
        adj.resize(N);

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(__gcd(v[i], u[j]) > 1) adj[i].push_back(j);

        l.clear();
        l.resize(N, -1);

        r.clear();
        r.resize(M, -1);

        int ans = 0;

        for(int i=0; i<N; i++) {
            vis.clear();
            vis.resize(N);

            if(f(i)) ans++;
        }

        cout << ans << "\n";
    }
}
