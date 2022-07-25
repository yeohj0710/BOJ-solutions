#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> dis;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=1; i<=N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            adj[i].push_back(x);
        }
    }

    dis.resize(N+1, -1);
    dis[1] = 1;

    queue<int> q;
    q.push(1);

    int ans = INT_MAX;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            if(dis[y] != -1) continue;

            dis[y] = dis[x] + 1;
            q.push(y);
        }

        if(adj[x].size() == 0) ans = min(ans, dis[x]);
    }

    bool check = true;

    for(int i=1; i<=N; i++)
        if(dis[i] == -1) check = false;

    if(check) cout << "Y\n";
    else cout << "N\n";

    cout << ans << "\n";
}
