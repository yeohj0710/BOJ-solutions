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
    dis[1] = 0;

    queue<int> q;
    q.push(1);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i=0; i<adj[cur].size(); i++) {
            int nex = adj[cur][i];

            if(dis[nex] != -1) continue;

            dis[nex] = dis[cur] + 1;
            q.push(nex);
        }
    }

    int Max = 0;
    for(int i=1; i<=N; i++) Max = max(Max, dis[i]);

    for(int i=1; i<=N; i++)
        if(dis[i] == Max) {
            cout << i << " ";
            break;
        }

    cout << Max << " ";

    int cnt = 0;
    for(int i=1; i<=N; i++)
        if(dis[i] == Max) cnt++;

    cout << cnt << "\n";
}
