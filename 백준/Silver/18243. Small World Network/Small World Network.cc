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

    bool check = true;

    for(int i=1; i<=N; i++) {
        vector<int> dis(N+1, -1);
        dis[i] = 0;

        queue<int> q;
        q.push(i);

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int j=0; j<adj[x].size(); j++) {
                int y = adj[x][j];

                if(dis[y] != -1) continue;

                dis[y] = dis[x] + 1;
                q.push(y);
            }
        }

        for(int j=1; j<=N; j++)
            if(dis[j] > 6 || dis[j] == -1) check = false;
    }

    if(check) cout << "Small World!\n";
    else cout << "Big World!\n";
}
