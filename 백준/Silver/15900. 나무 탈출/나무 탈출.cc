#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
int sum = 0;

void f(int x, int cnt) {
    if(x != 1 && adj[x].size() == 1) {
        sum += cnt;
        return;
    }

    for(int i=0; i<adj[x].size(); i++) {
        if(!vis[x]) {
            vis[x] = true;

            f(adj[x][i], cnt+1);

            vis[x] = false;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);
    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vis.resize(N+1);

    f(1, 0);

    if(sum % 2 == 1) cout << "Yes\n";
    else cout << "No\n";
}
