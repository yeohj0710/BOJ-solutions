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

    while(T--) {
        int N, M; cin >> N >> M;

        adj.clear();
        adj.resize(101);

        while(M--) {
            int a, b, K; cin >> a >> b >> K;

            while(K--) {
                int x; cin >> x;

                for(int i=a; i<b; i++) adj[i].push_back(x);
            }
        }

        l.clear();
        l.resize(101, -1);

        r.clear();
        r.resize(N+1, -1);

        int match = 0;
        bool check = false;

        for(int i=0; i<=100; i++) {
            vis.clear();
            vis.resize(101);

            if(f(i)) match++;

            if(match == N) {
                cout << i+1 << "\n";

                check = true;
                break;
            }
        }

        if(!check) cout << -1 << "\n";
    }
}
