#include <bits/stdc++.h>
#define MAX 2005
using namespace std;

int n, m, t, s, g, h;
vector<pair<int, int>> adj[MAX];
vector<int> dest;
int dist_s[MAX], dist_g[MAX], dist_h[MAX];

void dijkstra(int start, int dist[MAX]) {
    for(int i=1; i<=n; i++) dist[i] = INT_MAX;
    dist[start] = 0;

    priority_queue<pair<int, int>> pQueue;
    pQueue.push({0, start});

    while(!pQueue.empty()) {
        int dist1 = -pQueue.top().first;
        int curr = pQueue.top().second;

        pQueue.pop();

        for(int i=0; i<adj[curr].size(); i++) {
            int next = adj[curr][i].first;
            int dist2 = adj[curr][i].second;

            if(dist1 + dist2 < dist[next]) {
                dist[next] = dist1 + dist2;
                pQueue.push({-dist[next], next});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        for(int i=0; i<MAX; i++) adj[i].clear();
        dest.clear();

        cin >> n >> m >> t;
        cin >> s >> g >> h;

        for(int i=0; i<m; i++) {
            int a, b, d; cin >> a >> b >> d;
            adj[a].push_back({b, d});
            adj[b].push_back({a, d});
        }

        for(int i=0; i<t; i++) {
            int x; cin >> x;
            dest.push_back(x);
        }

        dijkstra(s, dist_s);
        dijkstra(g, dist_g);
        dijkstra(h, dist_h);

        sort(dest.begin(), dest.end());
        for(int i=0; i<dest.size(); i++) {
            if(dist_s[g] + dist_g[h] + dist_h[dest[i]] == dist_s[dest[i]]) cout << dest[i] << " ";
            else if(dist_s[h] + dist_h[g] + dist_g[dest[i]] == dist_s[dest[i]]) cout << dest[i] << " ";
        }
        cout << "\n";
    }
}
