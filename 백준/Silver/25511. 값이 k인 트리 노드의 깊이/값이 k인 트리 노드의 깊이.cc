#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<vector<int>> adj;
vector<int> v;
int ans;

void f(int x, int dep) {
    if(v[x] == M) ans = dep;

    for(int i=0; i<adj[x].size(); i++) f(adj[x][i], dep+1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    adj.resize(N);

    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
    }

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f(0, 0);

    cout << ans << "\n";
}
