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

    int N;

    while(cin >> N) {
        adj.clear();
        adj.resize(N);

        for(int i=0; i<N; i++) {
            int a, M; char ch;
            cin >> a >> ch >> ch >> M >> ch;

            while(M--) {
                int b; cin >> b;

                adj[a].push_back(b - N);
            }
        }

        l.clear();
        l.resize(N, -1);

        r.clear();
        r.resize(N, -1);

        int ans = 0;

        for(int i=0; i<N; i++) {
            vis.clear();
            vis.resize(N);

            if(f(i)) ans++;
        }

        cout << ans << "\n";
    }
}
