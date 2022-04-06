#include <bits/stdc++.h>
#define MAX 20001
using namespace std;
typedef pair<int, int> Pair;

int dist[MAX];
vector<Pair> edge[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int V, E, K; cin >> V >> E >> K;

    for(int i=0; i<E; i++) {
        int u, v, w; cin >> u >> v >> w;
        edge[u].push_back({w, v});
    }

    for(int i=1; i<=V; i++) dist[i] = INT_MAX;
    dist[K] = 0;

    priority_queue<Pair, vector<Pair>, greater<Pair>> pQueue;
    pQueue.push({0, K});

    while(!pQueue.empty()) {
        Pair curr = pQueue.top();
        pQueue.pop();

        int currDist = curr.first, currVertex = curr.second;
        if(dist[currVertex] != currDist) continue;
        for(int i=0; i<edge[currVertex].size(); i++) {
            Pair next = edge[currVertex][i];
            int nextDist = next.first, nextVertex = next.second;
            if(currDist + nextDist < dist[nextVertex]) {
                dist[nextVertex] = currDist + nextDist;
                pQueue.push({dist[nextVertex], nextVertex});
            }
        }
    }

    for(int i=1; i<=V; i++) {
        if(dist[i] == INT_MAX) cout << "INF\n";
        else cout << dist[i] << "\n";
    }
}
