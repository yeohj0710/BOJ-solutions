#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<vector<int>> adj;
vector<int> v, u;
int a = 0, b = 0;

void f(int x, int pre) {
    if(pre == 0) a += v[x];
    else a += u[x];

    for(int i=0; i<adj[x].size(); i++) {
        if(pre == 0) f(adj[x][i], 1);
        else f(adj[x][i], 0);
    }
}

void g(int x, int pre) {
    if(pre == 0) b += v[x];
    else b += u[x];

    for(int i=0; i<adj[x].size(); i++) {
        if(pre == 0) g(adj[x][i], 1);
        else g(adj[x][i], 0);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    adj.resize(N);

    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
    }

    v.resize(N);
    u.resize(N);

    for(int i=0; i<N; i++) cin >> v[i] >> u[i];

    f(0, 0);

    g(0, 1);

    cout << min(a, b) << "\n";
}
