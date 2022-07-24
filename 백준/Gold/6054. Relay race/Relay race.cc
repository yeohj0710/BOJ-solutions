#include <bits/stdc++.h>
#define int long long
using namespace std;

typedef pair<int, int> p;
vector<vector<p>> adj;
vector<int> dis;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);
    dis.resize(N+1, INT_MAX);

    vector<int> w(N+1);

    for(int i=1; i<=N; i++) {
        int a, b; cin >> a >> b;

        while(b--) {
            int c; cin >> c;

            adj[i].push_back({c, a});
        }

        w[i] = a;
    }

    if(N == 1) {
        cout << w[1] << "\n";
        return 0;
    }

    priority_queue<p, vector<p>, greater<p>> pq; // <dis, node>
    pq.push({0, 1});

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

    int ans = 0;
    for(int i=1; i<=N; i++) {
        if(dis[i] != INT_MAX) ans = max(ans, dis[i] + w[i]);
    }

    cout << ans << "\n";
}
