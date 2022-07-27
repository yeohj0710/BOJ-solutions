#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<vector<int>> adj(13);

    for(int i=0; i<12; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=12; i++) {
        if(adj[i].size() != 3) continue;

        vector<bool> b(3);

        for(int j=0; j<adj[i].size(); j++) {
            int x = adj[i][j];

            if(adj[x].size() == 1) b[0] = true;
            if(adj[x].size() == 2) b[1] = true;
            if(adj[x].size() == 3) b[2] = true;
        }

        if(b[0] && b[1] && b[2]) {
            cout << i << "\n";
            break;
        }
    }
}
