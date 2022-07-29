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

    int N, M; cin >> N >> M;

    vector<pair<int, int>> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i].first >> v[i].second;

    adj.resize(N+1);

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            int d = pow(abs(v[i].first - v[j].first), 2) + pow(abs(v[i].second - v[j].second), 2);

            if(d <= M*M) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }

    vector<pair<int, int>> u(N+1);
    for(int i=1; i<=N; i++) u[i].second = i;

    for(int i=1; i<=N; i++) {
        if(u[i].first != 0) continue;

        vis.clear();
        vis.resize(N+1);

        f(i);

        int cnt = 0;

        for(int j=1; j<=N; j++)
            if(vis[j]) cnt++;

        for(int j=1; j<=N; j++)
            if(vis[j]) u[j].first = cnt;
    }

    sort(u.begin()+1, u.end(), greater<pair<int, int>>());

    for(int i=1; i<=N; i++) cout << u[i].second << " ";
    cout << "\n";
}
