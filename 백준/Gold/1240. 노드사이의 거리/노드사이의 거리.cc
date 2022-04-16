#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

vector<pair<int, int>> adj[MAX]; // adj[from] = <to, distance>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=0; i<N-1; i++) {
        int from, to, dist_; cin >> from >> to >> dist_;

        adj[from].push_back({to, dist_});
        adj[to].push_back({from, dist_});
    }

    while(M--) {
        int sour, dest; cin >> sour >> dest;

        int dist[MAX];
        for(int i=1; i<=N; i++) dist[i] = -1;

        queue<int> Q;
        Q.push(sour);
        dist[sour] = 0;

        int sum = 0;
        while(!Q.empty()) {
            int curr = Q.front();
            Q.pop();

            if(curr == dest) break;

            for(int i=0; i<adj[curr].size(); i++) {
                int next = adj[curr][i].first;
                int dist_ = adj[curr][i].second;

                if(dist[next] != -1) continue;

                dist[next] = dist[curr] + dist_;
                Q.push(next);
            }
        }

        cout << dist[dest] << "\n";
    }
}
