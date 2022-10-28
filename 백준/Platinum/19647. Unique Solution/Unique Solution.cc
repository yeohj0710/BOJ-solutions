#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> l1, r1, l2, r2;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(r1[y] == -1 || (!vis[r1[y]] && f(r1[y]))) {
            l1[x] = y, r1[y] = x;

            return true;
        }
    }

    return false;
}

bool g(int x) {
    vis[x] = true;

    for(int i=adj[x].size()-1; i>=0; i--) {
        int y = adj[x][i];

        if(r2[y] == -1 || (!vis[r2[y]] && g(r2[y]))) {
            l2[x] = y, r2[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=1; i<=N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            adj[i].push_back(x);
        }
    }

    l1.resize(N+1, -1);
    r1.resize(N+1, -1);

    for(int i=1; i<=N; i++) {
        vis.clear();
        vis.resize(N+1);

        f(i);
    }

    l2.resize(N+1, -1);
    r2.resize(N+1, -1);

    for(int i=1; i<=N; i++) {
        vis.clear();
        vis.resize(N+1);

        g(i);
    }

    if(l1 != l2) {
        cout << -1 << "\n";
        return 0;
    }

    cout << 1 << "\n";

    for(int i=1; i<=N; i++) cout << l1[i] << " ";
    cout << "\n";
}
