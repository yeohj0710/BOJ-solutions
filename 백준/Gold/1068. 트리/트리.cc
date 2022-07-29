#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
int root, del, ans = 0;

void f(int x) {
    vis[x] = true;

    if(adj[x].size() == 0) {
        ans++;
        return;
    }
    if(adj[x].size() == 1 && adj[x][0] == del) {
        ans++;
        return;
    }

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(vis[y] || y == del) continue;

        f(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N);
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x == -1) {
            root = i;
            continue;
        }

        adj[x].push_back(i);
    }

    cin >> del;

    vis.resize(N);

    if(root != del) f(root);

    cout << ans << "\n";
}
