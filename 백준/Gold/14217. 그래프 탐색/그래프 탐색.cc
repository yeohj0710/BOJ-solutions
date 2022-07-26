#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int adj[501][501] = {};

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a][b] = adj[b][a] = 1;
    }

    int K; cin >> K;

    while(K--) {
        int Q, a, b; cin >> Q >> a >> b;

        if(Q == 1) adj[a][b] = adj[b][a] = 1;
        else if(Q == 2) adj[a][b] = adj[b][a] = 0;

        vector<int> dis(N+1, -1);
        dis[1] = 0;

        queue<int> q;
        q.push(1);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int i=1; i<=N; i++) {
                if(adj[x][i] == 0) continue;
                if(dis[i] != -1) continue;

                dis[i] = dis[x] + 1;
                q.push(i);
            }
        }

        for(int i=1; i<=N; i++) cout << dis[i] << " ";
        cout << "\n";
    }
}
