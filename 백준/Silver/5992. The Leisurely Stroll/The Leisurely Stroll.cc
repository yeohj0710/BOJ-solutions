#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> adj(N+1);
    vector<bool> v(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        if(b == 0) v[a] = true;
        else adj[a].push_back(b);

        if(c == 0) v[a] = true;
        else adj[a].push_back(c);
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

    for(int i=1; i<=N; i++)
        if(v[i]) dis[i]++;

    int ans = 0;

    for(int i=1; i<=N; i++)
        ans = max(ans, dis[i]);

    cout << ans << "\n";
}
