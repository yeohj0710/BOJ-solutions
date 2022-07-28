#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> adj(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        adj[x].push_back(i);
    }

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    sort(v.begin(), v.end());

    queue<int> q;
    q.push(0);

    int ans = 0;

    while(!q.empty()) {
        int x = q.front();
        q.pop();

        if(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x) > 0) {
            ans++;
            continue;
        }

        for(int i=0; i<adj[x].size(); i++) q.push(adj[x][i]);
    }

    cout << ans << "\n";
}
