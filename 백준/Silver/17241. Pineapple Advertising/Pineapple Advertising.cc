#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<int>> adj(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> v(N+1), u(N+1);

    while(K--) {
        int x; cin >> x;

        int ans = 0;

        if(u[x]) {
            cout << ans << "\n";
            continue;
        }

        u[x] = true;

        if(!v[x]) {
            ans++;
            v[x] = true;
        }

        for(int i=0; i<adj[x].size(); i++) {
            int y = adj[x][i];

            if(!v[y]) {
                ans++;
                v[y] = true;
            }
        }

        cout << ans << "\n";
    }
}
