#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

typedef pair<int, int> Pair;

vector<Pair> adj[MAX]; // adj[from] <to, distance>
int dist[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    while(M--) {
        int from, to, dist_; cin >> from >> to >> dist_;

        adj[from].push_back({to, dist_});
    }

    int sour, dest; cin >> sour >> dest;

    for(int i=1; i<=N; i++) dist[i] = INT_MAX;
    dist[sour] = 0;

    priority_queue<Pair, vector<Pair>, greater<Pair>> PQ; // <distance, node>
    PQ.push({0, sour});

    int prev[MAX];
    for(int i=1; i<=N; i++) prev[i] = -1;

    while(!PQ.empty()) {
        int dist1 = PQ.top().first;
        int curr = PQ.top().second;
        PQ.pop();

        if(dist[curr] < dist1) continue;

        for(int i=0; i<adj[curr].size(); i++) {
            int next = adj[curr][i].first;
            int dist2 = adj[curr][i].second;

            if(dist1 + dist2 < dist[next]) {
                dist[next] = dist1 + dist2;
                PQ.push({dist[next], next});
                prev[next] = curr;
            }
        }
    }

    cout << dist[dest] << "\n";

    vector<int> route;
    int curr = dest;
    while(curr != -1) {
        route.push_back(curr);
        curr = prev[curr];
    }

    cout << route.size() << "\n";
    for(int i=route.size()-1; i>=0; i--)
        cout << route[i] << " ";
    cout << "\n";
}
