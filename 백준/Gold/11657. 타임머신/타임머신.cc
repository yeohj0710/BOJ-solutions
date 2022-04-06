#include <bits/stdc++.h>
#define MAX 505
using namespace std;

vector<pair<pair<int, int>, int>> adj;
long long dist[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=0; i<M; i++) {
        int A, B, C; cin >> A >> B >> C;

        adj.push_back({{A, B}, C});
    }

    for(int i=1; i<=N; i++) dist[i] = INT_MAX;
    dist[1] = 0;

    for(int i=1; i<=N-1; i++) {
        for(int j=0; j<adj.size(); j++) {
            int from = adj[j].first.first;
            int to = adj[j].first.second;
            int dist_ = adj[j].second;

            if(dist[from] == INT_MAX) continue;

            dist[to] = min(dist[to], dist[from] + dist_);
        }
    }

    for(int i=0; i<adj.size(); i++) {
        int from = adj[i].first.first;
        int to = adj[i].first.second;
        int dist_ = adj[i].second;

        if(dist[from] == INT_MAX) continue;

        if(dist[from] + dist_ < dist[to]) {
            cout << "-1";
            return 0;
        }
    }

    for(int i=2; i<=N; i++) {
        if(dist[i] == INT_MAX) cout << "-1" << "\n";
        else cout << dist[i] << "\n";
    }
}
