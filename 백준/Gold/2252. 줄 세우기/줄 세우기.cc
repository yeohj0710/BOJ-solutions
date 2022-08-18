#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj(N+1);
    vector<int> deg(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);

        deg[b]++;
    }

    queue<int> q;

    for(int i=1; i<=N; i++)
        if(deg[i] == 0) q.push(i);

    vector<int> ord;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        ord.push_back(x);

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            deg[y]--;

            if(deg[y] == 0) q.push(y);
        }
    }

    for(int i=0; i<ord.size(); i++) cout << ord[i] << " ";
    cout << "\n";
}
