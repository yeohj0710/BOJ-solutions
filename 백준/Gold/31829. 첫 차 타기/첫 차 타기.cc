#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> p;
vector<vector<p>> adj;
vector<int> dis;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, K, X, Y; cin >> N >> K >> X >> Y;

    adj.resize(N*2+1);
    dis.resize(N*2+1, LLONG_MAX);

    while(X--) {
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    while(Y--) {
        int a, b, c; cin >> a >> b >> c;
        adj[N+a].push_back({N+b, c});
        adj[N+b].push_back({N+a, c});
    }

    int sour = 1, dest = N;

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

    for(int i=1; i<=N; i++) {
        adj[i].push_back({N+i, max((int)0, K-dis[i])});
        adj[N+i].push_back({i, 0});
    }

    dis.clear();
    dis.resize(N*2+1, LLONG_MAX);

    while(!pq.empty()) pq.pop();
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
