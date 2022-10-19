#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double x, y; };

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

    double S, V; cin >> S >> V;

    vector<s> v(N), u(M);

    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;
    for(int i=0; i<M; i++) cin >> u[i].x >> u[i].y;

    adj.resize(N);

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            double x = sqrt(pow(v[i].x - u[j].x, 2) + pow(v[i].y - u[j].y, 2));

            if(x <= S * V) adj[i].push_back(j);
        }

    l.resize(N, -1);
    r.resize(M, -1);

    int ans = 0;

    for(int i=0; i<N; i++) {
        vis.clear();
        vis.resize(N);

        if(f(i)) ans++;
    }

    ans = N - ans;

    cout << ans << "\n";
}
