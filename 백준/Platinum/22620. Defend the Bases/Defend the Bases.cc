#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y, v; };

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

    cout << fixed;
    cout.precision(8);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<s> v(N), u(M);

        for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y >> v[i].v;
        for(int i=0; i<M; i++) cin >> u[i].x >> u[i].y;

        double ll = 0, rr = INT_MAX, ans = INT_MAX, tr = 1e2;

        while(tr--) {
            double m = (ll + rr) / 2;

            adj.clear();
            adj.resize(M);

            for(int i=0; i<N; i++)
                for(int j=0; j<M; j++)
                    if(sqrt(pow(v[i].x - u[j].x, 2) + pow(v[i].y - u[j].y, 2)) / v[i].v <= m) adj[j].push_back(i);

            l.clear();
            l.resize(M, -1);

            r.clear();
            r.resize(N, -1);

            int match = 0;

            for(int i=0; i<M; i++) {
                vis.clear();
                vis.resize(M);

                if(f(i)) match++;
            }

            if(match == M) {
                ans = min(ans, m);
                rr = m;
            }
            else ll = m;
        }

        cout << ll << "\n";
    }
}
