#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> dis;

void f(int x) {
    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(dis[y] == -1) {
            dis[y] = dis[x] + 1;
            f(y);
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=N; i++)
        sort(adj[i].begin(), adj[i].end(), greater<int>());

    dis.resize(N+1, -1);
    dis[K] = 0;

    f(K);

    for(int i=1; i<=N; i++) cout << dis[i] << "\n";
}
