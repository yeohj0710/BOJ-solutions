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

    adj.resize(1001);

    for(int i=0; i<N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            adj[x].push_back(i);
        }
    }

    l.clear();
    l.resize(1001, -1);

    r.clear();
    r.resize(N, -1);

    int match = 0;

    for(int i=1; i<=1000; i++) {
        vis.clear();
        vis.resize(1001);

        if(f(i)) match++;

        if(match == N) {
            cout << i+1 << "\n";
            break;
        }
    }
}
