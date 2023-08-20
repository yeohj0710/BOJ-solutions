#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> group;
vector<vector<int>> adj;
bool chk;

void f(int x, int y) {
    group[x] = y;

    for(int i=0; i<adj[x].size(); i++) {
        if(!group[adj[x][i]]) f(adj[x][i], -y);

        if(group[x] == group[adj[x][i]]) {
            chk = false;
            return;
        }
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    adj.clear();
    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    group.clear();
    group.resize(N+1);
    chk = true;

    for(int i=1; i<=N; i++)
        if(group[i] == 0) f(i, 1);

    if(chk) cout << 1 << "\n";
    else cout << 0 << "\n";
}
