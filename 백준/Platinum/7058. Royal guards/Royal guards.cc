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

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N+1, vector<int>(M+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> v[i][j];

    vector<vector<int>> u(N+1, vector<int>(M+1));
    int rcnt = 1;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            if(v[i][j] == 0) u[i][j] = rcnt;
            if(v[i][j] != 2 && (j == M || v[i][j+1] == 2)) rcnt++;
        }

    rcnt--;

    vector<vector<int>> w(N+1, vector<int>(M+1));
    int ccnt = 1;

    for(int i=1; i<=M; i++)
        for(int j=1; j<=N; j++) {
            if(v[j][i] == 0) w[j][i] = ccnt;
            if(v[j][i] != 2 && (j == N || v[j+1][i] == 2)) ccnt++;
        }

    ccnt--;

    adj.resize(rcnt+1);

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            if(v[i][j] == 0) adj[u[i][j]].push_back(w[i][j]);


    l.resize(rcnt+1, -1);
    r.resize(ccnt+1, -1);

    int ans = 0;
    vector<pair<int, int>> vv;

    for(int i=1; i<=rcnt; i++) {
        vis.clear();
        vis.resize(rcnt+1);

        if(f(i)) {
            ans++;

            vv.clear();

            for(int i=1; i<=rcnt; i++)
                if(i == r[l[i]]) vv.push_back({i, l[i]});
        }
    }

    cout << ans << "\n";

    for(int i=0; i<vv.size(); i++)
        for(int j=1; j<=N; j++)
            for(int k=1; k<=M; k++)
                if(u[j][k] == vv[i].first && w[j][k] == vv[i].second) cout << j << " " << k << "\n";
}
