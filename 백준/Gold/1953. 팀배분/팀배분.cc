#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<int> group;
vector<vector<int>> adj;

void f(int x, int y) {
    group[x] = y;

    for(int i=0; i<adj[x].size(); i++)
        if(!group[adj[x][i]]) f(adj[x][i], -y);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=1; i<=N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            adj[i].push_back(x);
            adj[x].push_back(i);
        }
    }

    group.resize(N+1);

    for(int i=1; i<=N; i++)
        if(group[i] == 0) f(i, 1);

    vector<int> l, r;

    for(int i=1; i<=N; i++) {
        if(group[i] == 1) l.push_back(i);
        else r.push_back(i);
    }

    cout << l.size() << "\n";

    for(int i=0; i<l.size(); i++) cout << l[i] << " ";
    cout << "\n";

    cout << r.size() << "\n";

    for(int i=0; i<r.size(); i++) cout << r[i] << " ";
    cout << "\n";
}
