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
        vector<pair<int, int>> v, u;
        map<pair<int, int>, int> vm, um;
        int vcnt = 0, ucnt = 0;

        for(int i=0; i<N; i++) {
            int x, y; cin >> x >> y;

            if((x + y) % 2 == 0) {
                v.push_back({x, y});
                vm[{x, y}] = ++vcnt;
            }
            else {
                u.push_back({x, y});
                um[{x, y}] = ++ucnt;
            }
        }

        adj.clear();
        adj.resize(vcnt+1);

        for(int i=0; i<v.size(); i++) {
            int x = v[i].first;
            int y = v[i].second;

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            for(int j=0; j<4; j++) {
                int nx = x + dx[j];
                int ny = y + dy[j];

                if(um[{nx, ny}] != 0) adj[vm[{x, y}]].push_back(um[{nx, ny}]);
            }
        }

        l.clear();
        l.resize(vcnt+1, -1);

        r.clear();
        r.resize(ucnt+1, -1);

        int match = 0;

        for(int i=1; i<=vcnt; i++) {
            vis.clear();
            vis.resize(vcnt+1);

            if(f(i)) match++;
        }

        int ans = N - match;

        cout << ans << "\n";
    }
}
