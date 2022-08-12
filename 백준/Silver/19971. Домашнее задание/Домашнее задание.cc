#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    int sum = 0;

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        sum += v[i];
    }

    vector<vector<int>> adj(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
    }

    int Max = 0;

    for(int i=1; i<=N; i++) {
        if(adj[i].size() > 0) continue;

        Max = max(Max, v[i]);
    }

    int ans = sum - Max;

    cout << ans << "\n";
}
