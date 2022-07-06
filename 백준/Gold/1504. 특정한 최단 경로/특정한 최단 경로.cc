#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> p;
vector<vector<p>> adj;
vector<int> dis;
priority_queue<p, vector<p>, greater<p>> pq;

void f() {
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
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    int x, y; cin >> x >> y;

    pq.push({0, 1});
    dis.resize(N+1, INT_MAX);
    dis[1] = 0;
    f();
    int sum1 = dis[x], sum2 = dis[y];

    pq.push({0, x});
    dis.clear();
    dis.resize(N+1, INT_MAX);
    dis[x] = 0;
    f();
    sum1 += dis[y];
    sum2 += dis[N];

    pq.push({0, y});
    dis.clear();
    dis.resize(N+1, INT_MAX);
    dis[y] = 0;
    f();
    sum1 += dis[N];
    sum2 += dis[x];

    if(sum1 >= INT_MAX && sum2 >= INT_MAX) cout << -1 << "\n";
    else if(sum1 < INT_MAX && sum2 >= INT_MAX) cout << sum1 << "\n";
    else if(sum1 >= INT_MAX && sum2 < INT_MAX) cout << sum2 << "\n";
    else cout << min(sum1, sum2) << "\n";
}
