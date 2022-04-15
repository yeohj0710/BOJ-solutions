#include<bits/stdc++.h>
#define MAX 1001
using namespace std;
typedef pair<int, int> Pair;

int N, M;
vector<pair<int, int>> adj[MAX];
int dist[MAX];

void Dijkstra(int sour) {
    for(int i=1; i<=N; i++) dist[i] = INT_MAX;
    dist[sour] = 0;

    priority_queue<Pair, vector<Pair>, greater<Pair>> pq; // <distance, node>
    pq.push({0, sour});

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
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int from, to, dist_; cin >> from >> to >> dist_;

        adj[from].push_back({to, dist_});
    }

    int sour, dest; cin >> sour >> dest;

    Dijkstra(sour);

    cout << dist[dest];
}
