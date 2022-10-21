#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x1, y1, x2, y2; };

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

    vector<s> v, u;

    for(int i=0; i<N; i++) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        if(y1 == y2) {
            if(x1 > x2) swap(x1, x2);
            v.push_back({x1, y1, x2, y2});
        }
        else {
            if(y1 > y2) swap(y1, y2);
            u.push_back({x1, y1, x2, y2});
        }
    }

    adj.resize(v.size());

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<u.size(); j++)
            if(v[i].x1 <= u[j].x1 && u[j].x1 <= v[i].x2
               && u[j].y1 <= v[i].y1 && v[i].y1 <= u[j].y2) adj[i].push_back(j);

    l.resize(v.size(), -1);
    r.resize(u.size(), -1);

    int match = 0;

    for(int i=0; i<v.size(); i++) {
        vis.clear();
        vis.resize(v.size());

        if(f(i)) match++;
    }

    int ans = N - match;

    cout << ans << "\n";
}
