#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N, sour, dest; cin >> N >> sour >> dest;

    typedef pair<int, int> p;
    vector<vector<p>> adj(N+1);

    for(int i=1; i<=N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            if(adj[i].empty()) adj[i].push_back({x, 0});
            else adj[i].push_back({x, 1});
        }
    }

    vector<int> dis(N+1, INT_MAX);
    dis[sour] = 0;

    priority_queue<p, vector<p>, greater<p>> pq; // <dis, node>
    pq.push({0, sour});

    while(!pq.empty()) {
        int dis1 = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if(dis[cur] < dis1) continue;

        for(int i=0; i<adj[cur].size(); i++) {
            int nex = adj[cur][i].first;
            int dis2 = adj[cur][i].second;

            if(dis1 + dis2 < dis[nex]) {
                dis[nex] = dis1 + dis2;
                pq.push({dis[nex], nex});
            }
        }
    }

    if(dis[dest] != INT_MAX) cout << dis[dest] << "\n";
    else cout << -1 << "\n";
}
