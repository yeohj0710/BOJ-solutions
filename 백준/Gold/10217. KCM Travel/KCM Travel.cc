#include <bits/stdc++.h>
#define MAX_V 105
#define MAX_M 10005
using namespace std;

struct edge { int dest, cost, tdist; };
vector<edge> adj[MAX_M];
int dist[MAX_V][MAX_M] = {}; // dist[i][j] : shortest distance to node "i" using cost "j"

struct compare {
    bool operator()(edge &a, edge &b) {
        return a.cost > b.cost;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        for(int i=0; i<MAX_M; i++) adj[i].clear();
        for(int i=0; i<MAX_V; i++)
            for(int j=0; j<MAX_M; j++) dist[i][j] = INT_MAX;

        int N, M, K; cin >> N >> M >> K;

        for(int i=0; i<K; i++) {
            int u, v, c, d; cin >> u >> v >> c >> d;
            adj[u].push_back({v, c, d});
        }

        priority_queue<edge, vector<edge>, compare> pQueue;
        pQueue.push({1, 0, 0}); dist[1][0] = 0;

        while(!pQueue.empty()) {
            int curr = pQueue.top().dest;
            int cost = pQueue.top().cost;
            int tdist = pQueue.top().tdist;

            pQueue.pop();

            if(tdist > dist[curr][cost] || cost > M) continue;

            for(int i=0; i<adj[curr].size(); i++) {
                int next = adj[curr][i].dest;
                int cost_ = adj[curr][i].cost + cost;
                int tdist_ = adj[curr][i].tdist + tdist;

                if(tdist_ >= dist[next][cost_] || cost_ > M) continue;

                dist[next][cost_] = tdist_;
                pQueue.push({next, cost_, tdist_});
            }
        }

        int ans = INT_MAX;
        for(int i=1; i<=M; i++) ans = min(ans, dist[N][i]);

        if(ans != INT_MAX) cout << ans << "\n";
        else cout << "Poor KCM\n";
    }
}
