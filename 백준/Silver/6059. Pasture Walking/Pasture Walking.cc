#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<pair<int, int>>> adj;
int ans, dest;

void f(int cur, int pre, int sum) {
    if(cur == dest) {
        ans = sum;
        return;
    }

    for(int i=0; i<adj[cur].size(); i++) {
        int nex = adj[cur][i].first;

        if(nex != pre) f(nex, cur, sum + adj[cur][i].second);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    while(M--) {
        int a, b; cin >> a >> b;

        dest = b;
        ans = 0;

        f(a, 0, 0);

        cout << ans << "\n";
    }
}
