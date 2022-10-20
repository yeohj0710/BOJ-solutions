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

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int M, N; cin >> M >> N;

        adj.clear();
        adj.resize(N+1);

        for(int i=1; i<=N; i++) {
            int K; cin >> K;

            while(K--) {
                int x; cin >> x;

                adj[i].push_back(x);
            }
        }

        l.clear();
        l.resize(N+1, -1);

        r.clear();
        r.resize(M+1, -1);

        int ans = 0;

        for(int i=1; i<=N; i++) {
            vis.clear();
            vis.resize(N+1);

            if(f(i)) ans++;
        }

        cout << "Data Set " << t << ":\n";
        cout << ans << "\n";
        cout << "\n";
    }
}
