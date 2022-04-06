#include <bits/stdc++.h>
#define MAX 805
using namespace std;

int N, E;
vector<pair<int, int>> adj[MAX];
int dist[MAX];

void Dijkstra(int start) {
    for(int i=1; i<=N; i++) dist[i] = INT_MAX;
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

    cin >> N >> E;

    for(int i=0; i<E; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    int A, B; cin >> A >> B;

    int route1 = 0, route2 = 0;
    bool check1 = true, check2 = true;

    Dijkstra(1);

    if(dist[A] == INT_MAX) check1 = false;
    if(check1) route1 += dist[A];

    if(dist[B] == INT_MAX) check2 = false;
    if(check2) route2 += dist[B];

    Dijkstra(A);

    if(dist[B] == INT_MAX) check1 = false;
    if(check1) route1 += dist[B];

    Dijkstra(B);

    if(dist[N] == INT_MAX) check1 = false;
    if(check1) route1 += dist[N];

    if(dist[A] == INT_MAX) check2 = false;
    if(check2) route2 += dist[A];

    Dijkstra(A);

    if(dist[N] == INT_MAX) check2 = false;
    if(check2) route2 += dist[N];

    if(!check1 && !check2) cout << "-1";
    else if(!check1) cout << route2;
    else if(!check2) cout << route1;
    else cout << min(route1, route2);
}
