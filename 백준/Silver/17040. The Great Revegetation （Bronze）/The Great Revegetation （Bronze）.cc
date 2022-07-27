#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> v(N+1);
    v[1] = 1;

    for(int i=2; i<=N; i++) {
        vector<bool> u(5);

        for(int j=0; j<adj[i].size(); j++) {
            u[v[adj[i][j]]] = true;
        }

        for(int j=1; j<=4; j++)
            if(!u[j]) {
                v[i] = j;
                break;
            }
    }

    for(int i=1; i<=N; i++) cout << v[i];
    cout << "\n";
}
