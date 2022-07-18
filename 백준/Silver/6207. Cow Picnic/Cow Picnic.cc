#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<vector<bool>> vis;
int cur;

void f(int x) {
    vis[cur][x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[cur][y]) f(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    adj.resize(M+1);

    while(K--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
    }

    vis.resize(N, vector<bool>(M+1));

    for(int i=0; i<N; i++) {
        cur = i;
        f(v[i]);
    }

    int ans = 0;
    for(int i=1; i<=M; i++) {
        bool check = true;
        for(int j=0; j<N; j++)
            if(!vis[j][i]) check = false;

        if(check) ans++;
    }

    cout << ans << "\n";
}
