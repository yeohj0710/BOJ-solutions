#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<pair<int, int>>> adj;
vector<int> dis;
int Max = 0;

void f(int x) {
    Max = max(Max, dis[x]);

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

    int N, M; cin >> N >> M;

    int sum = 0;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});

        sum += c;
    }

    dis.resize(N+1, -1);
    dis[M] = 0;

    f(M);

    int ans = sum*2 - Max;

    cout << ans << "\n";
}
