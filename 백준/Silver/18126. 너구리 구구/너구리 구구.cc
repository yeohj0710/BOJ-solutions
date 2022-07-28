#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> dis;
int ans = 0;

void f(int x) {
    ans = max(ans, dis[x]);

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i].first;

        if(dis[y] != -1) continue;

        dis[y] = dis[x] + adj[x][i].second;
        f(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    dis.resize(N+1, -1);
    dis[1] = 0;

    f(1);

    cout << ans << "\n";
}
