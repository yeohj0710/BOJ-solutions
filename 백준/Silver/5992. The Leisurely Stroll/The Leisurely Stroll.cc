#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> adj(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back(b);
        adj[a].push_back(c);
    }

    vector<int> dis(N+1, -1);
    dis[1] = 0;

    queue<int> q;
    q.push(1);

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            if(y == 0 || dis[y] != -1) continue;

            dis[y] = dis[x] + 1;
            q.push(y);
        }
    }

    int ans = 0;

    for(int i=1; i<=N; i++)
        ans = max(ans, dis[i] + 1);

    cout << ans << "\n";
}
