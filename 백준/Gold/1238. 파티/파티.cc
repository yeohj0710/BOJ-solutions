#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> p;
vector<vector<p>> adj, adjr;
vector<int> dis, disr;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    adj.resize(N+1);
    adjr.resize(N+1);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adjr[b].push_back({a, c});
    }

    dis.resize(N+1, INT_MAX);
    dis[K] = 0;

    priority_queue<p, vector<p>, greater<p>> pq; // <dis, node>
    pq.push({0, K});

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

    disr.resize(N+1, INT_MAX);
    disr[K] = 0;

    pq.push({0, K});

    while(!pq.empty()) {
        int dis1 = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if(disr[cur] < dis1) continue;

        for(int i=0; i<adjr[cur].size(); i++) {
            int nex = adjr[cur][i].first;
            int dis2 = adjr[cur][i].second;

            if(dis1 + dis2 < disr[nex]) {
                disr[nex] = dis1 + dis2;
                pq.push({disr[nex], nex});
            }
        }
    }

    int ans = 0;
    for(int i=1; i<=N; i++) ans = max(ans, dis[i] + disr[i]);

    cout << ans << "\n";
}
