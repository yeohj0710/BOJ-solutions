#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;
vector<vector<int>> adj;

int dfs(int x) {
    int sum = 0;

    for(int y : adj[x]) {
        int tmp = dfs(y);

        if(tmp > 0) sum += tmp;
    }

    return v[x] + sum;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N);
    for(int i=0; i<N-1; i++) {
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
    }

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    cout << dfs(0) << "\n";
}
