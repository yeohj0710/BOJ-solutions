#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, S, K; cin >> N >> M >> S >> K;

    vector<int> dis(N+1, -1);
    queue<int> q;

    while(S--) {
        int x; cin >> x;

        dis[x] = 0;
        q.push(x);
    }

    vector<vector<int>> adj(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

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

    vector<int> v;
    int add = 0;

    for(int i=0; i<=2e5; i+=add) {
        v.push_back(i);
        add += K;
    }

    for(int i=1; i<=N; i++)
        cout << lower_bound(v.begin(), v.end(), dis[i]) - v.begin() << " ";
}
