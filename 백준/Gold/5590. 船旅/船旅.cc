#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> p;
int N, M;
vector<vector<p>> adj;
vector<int> dis;

void f(int sour, int dest) {
    dis.clear();
    dis.resize(N+1, INT_MAX);
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
main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    adj.resize(N+1);

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int a, b, c; cin >> a >> b >> c;

            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }
        else if(Q == 0) {
            int sour, dest; cin >> sour >> dest;

            f(sour, dest);
        }
    }
}
