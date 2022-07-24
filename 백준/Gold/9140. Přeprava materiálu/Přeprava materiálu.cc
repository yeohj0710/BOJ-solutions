#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> p;
vector<vector<p>> adj;
vector<int> dis;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M, sour, dest; cin >> N >> M >> sour >> dest;
        if(N == 0 && M == 0 && sour == 0 && dest == 0) break;

        adj.clear();
        adj.resize(N+1);

        dis.clear();
        dis.resize(N+1, INT_MAX);

        while(M--) {
            int a, b, c; cin >> a >> b >> c;
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }

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

        cout << dis[dest] << "\n";
    }
}
