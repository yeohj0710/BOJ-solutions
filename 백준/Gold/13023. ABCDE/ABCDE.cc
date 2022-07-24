#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<int>> adj;
vector<bool> vis;
bool check = false;

void f(int x, int cnt) {
    vis[x] = true;

    if(cnt == 4) {
        check = true;
        return;
    }

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[y]) f(y, cnt + 1);
    }

    vis[x] = false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    adj.resize(N);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=0; i<N; i++) {
        vis.clear();
        vis.resize(N);

        f(i, 0);

        if(check) {
            cout << 1 << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";
}
