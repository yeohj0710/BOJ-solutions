#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> p;
vector<vector<p>> adj;
vector<int> dist;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, X; cin >> N >> M >> X;

    adj.resize(N+1);
    dist.resize(N+1, INT_MAX);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    priority_queue<p, vector<p>, greater<p>> pq; // <dist, node>
    pq.push({0, X});

    while(!pq.empty()) {
        int dist1 = pq.top().first;
        int curr = pq.top().second;
        pq.pop();

        if(dist[curr] < dist1) continue;

        for(int i=0; i<adj[curr].size(); i++) {
            int next = adj[curr][i].first;
            int dist2 = adj[curr][i].second;

            if(dist1 + dist2 < dist[next]) {
                dist[next] = dist1 + dist2;
                pq.push({dist[next], next});
            }
        }
    }

    int ans = 0;
    for(int i=1; i<=N; i++) {
        if(i == X) continue;
        ans = max(ans, dist[i]*2);
    }

    cout << ans << "\n";
}
