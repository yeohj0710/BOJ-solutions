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

    vector<bool> p(2001, true);
    p[1] = false;

    for(int i=2; i*i<=2000; i++)
        for(int j=2; i*j<=2000; j++) p[i*j] = false;

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    adj.resize(N);

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(p[v[i] + v[j]]) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }

    vector<int> u;

    for(int i=0; i<adj[0].size(); i++) {
        l.clear();
        l.resize(N, -1);

        r.clear();
        r.resize(N, -1);

        int x = adj[0][i];

        l[0] = x, r[x] = 0;

        int cnt = 1;

        for(int j=1; j<N; j++) {
            vis.clear();
            vis.resize(N);

            vis[0] = vis[x] = true;

            if(f(j)) cnt++;
        }

        if(cnt == N) u.push_back(v[x]);
    }

    if(u.size() == 0) {
        cout << -1 << "\n";
        return 0;
    }

    sort(u.begin(), u.end());

    for(int i=0; i<u.size(); i++) cout << u[i] << " ";
    cout << "\n";
}
