#include <bits/stdc++.h>
#define MAX 300001
using namespace std;

vector<int> adj[MAX];
int dist[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K, X; cin >> N >> M >> K >> X;

    while(M--) {
        int from, to; cin >> from >> to;

        adj[from].push_back(to);
    }

    for(int i=1; i<=N; i++) dist[i] = -1;

    queue<int> Q;
    Q.push(X);
    dist[X] = 0;

    while(!Q.empty()) {
        int curr = Q.front();
        Q.pop();

        for(int i=0; i<adj[curr].size(); i++) {
            int next = adj[curr][i];

            if(dist[next] == -1) {
                dist[next] = dist[curr] + 1;
                Q.push(next);
            }
        }
    }

    bool check = false;
    for(int i=1; i<=N; i++)
        if(dist[i] == K) {
            cout << i << "\n";
            check = true;
        }

    if(!check) cout << "-1";
}
