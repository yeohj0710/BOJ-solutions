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

        vector<vector<int>> v(N, vector<int>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        adj.clear();
        adj.resize(N);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(i == j) continue;

                bool check = true;

                for(int k=0; k<M; k++)
                    if(v[i][k] >= v[j][k]) check = false;

                if(check) adj[i].push_back(j);
            }

        l.clear(); l.resize(N, -1);
        r.clear(); r.resize(N, -1);

        int match = 0;

        for(int i=0; i<N; i++) {
            vis.clear();
            vis.resize(N);

            if(f(i)) match++;
        }

        int ans = N - match;

        cout << ans << "\n";
    }
}
