#include <bits/stdc++.h>
#define MAX 2500 + 200 + 1
#define INF 100000000
using namespace std;

vector<pair<pair<int, int>, int>> adj;
int dist[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M, W; cin >> N >> M >> W;

        adj.clear();

        for(int i=0; i<M; i++) {
            int a, b, c; cin >> a >> b >> c; // source, destination, distance

            adj.push_back({{a, b}, c});
            adj.push_back({{b, a}, c});
        }

        for(int i=0; i<W; i++) {
            int a, b, c; cin >> a >> b >> c; // source, destination, -distance

            adj.push_back({{a, b}, -c});
        }

        for(int i=1; i<=N; i++) dist[i] = INF;
        dist[1] = 0;

        for(int i=0; i<N-1; i++)
            for(int j=0; j<adj.size(); j++) {
                int sour = adj[j].first.first;
                int dest = adj[j].first.second;
                int dist_ = adj[j].second;

                dist[dest] = min(dist[dest], dist[sour] + dist_);
            }

        bool check = false;
        for(int i=0; i<adj.size(); i++) {
            int sour = adj[i].first.first;
            int dest = adj[i].first.second;
            int dist_ = adj[i].second;

            if(dist[sour] == INF) continue;

            if(dist[sour] + dist_ < dist[dest]) {
                check = true;
                break;
            }
        }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
