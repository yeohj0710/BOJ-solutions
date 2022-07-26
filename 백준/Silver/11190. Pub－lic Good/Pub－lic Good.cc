#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> dis(N+1, -1);

    for(int i=1; i<=N; i++) {
        if(dis[i] != -1) continue;

        dis[i] = 0;

        queue<int> q;
        q.push(i);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int i=0; i<adj[x].size(); i++) {
                int y = adj[x][i];

                if(dis[y] != -1) continue;

                dis[y] = dis[x] + 1;
                q.push(y);
            }
        }
    }

    bool check = true;
    for(int i=1; i<=N; i++) {
        if(adj[i].size() == 0 || dis[i] == -1) check = false;
    }
    if(!check) {
        cout << "Impossible\n";
        return 0;
    }

    for(int i=1; i<=N; i++) {
        if(dis[i] % 2 == 0) cout << "pub ";
        else cout << "house ";
    }
    cout << "\n";
}
