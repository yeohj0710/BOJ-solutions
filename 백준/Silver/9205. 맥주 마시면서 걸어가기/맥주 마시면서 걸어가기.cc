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

    while(T--) {
        int N; cin >> N;

        adj.clear();
        adj.resize(N+2);

        vector<pair<int, int>> v(N+2);
        for(int i=0; i<v.size(); i++) cin >> v[i].first >> v[i].second;

        for(int i=0; i<v.size(); i++)
            for(int j=0; j<v.size(); j++) {
                if(j == 0 || i == N+1) continue;
                if(i == j) continue;

                if(abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) > 1000) continue;

                adj[i].push_back(j);
            }

        vis.clear();
        vis.resize(N+2);

        f(0);

        if(vis[N+1]) cout << "happy\n";
        else cout << "sad\n";
    }
}
