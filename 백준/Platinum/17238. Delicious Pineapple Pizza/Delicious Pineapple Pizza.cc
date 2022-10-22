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

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    int ll = 0, rr = INT_MAX, ans = 0;

    while(ll <= rr) {
        int m = (ll + rr) / 2;

        adj.clear();
        adj.resize(N);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                if((v[i] ^ u[j]) >= m) adj[i].push_back(j);

        l.clear();
        l.resize(N, -1);

        r.clear();
        r.resize(N, -1);

        int match = 0;

        for(int i=0; i<N; i++) {
            vis.clear();
            vis.resize(N);

            if(f(i)) match++;
        }

        if(match == N) {
            ans = max(ans, m);
            ll = m + 1;
        }
        else rr = m - 1;
    }

    cout << ans << "\n";
}
