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

    vector<int> v;
    vector<bool> vis(N+1);

    for(int i=1; i<=N; i++) {
        if(vis[i]) continue;

        int cnt = 0;

        queue<int> q;
        q.push(i);

        vis[i] = true;
        cnt++;

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            for(int j=0; j<adj[x].size(); j++) {
                int y = adj[x][j];

                if(!vis[y]) {
                    q.push(y);

                    vis[y] = true;
                    cnt++;
                }
            }
        }

        v.push_back(cnt);
    }

    int ans = 1;

    for(int i=0; i<v.size(); i++) ans = (ans * v[i]) % (int)(1e9 + 7);

    cout << ans << "\n";
}
