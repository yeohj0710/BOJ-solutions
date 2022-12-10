#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> child, ans;

void dfs(int x) {
    for(int y : adj[x]) {
        dfs(y);

        child[x] += child[y] + 1;
        ans[x] += ans[y];
    }

    ans[x] += child[x] + 1;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    adj.resize(N+1);
    for(int i=2; i<=N; i++) {
        int x; cin >> x;

        adj[x].push_back(i);
    }

    child.resize(N+1);
    ans.resize(N+1);

    dfs(1);

    for(int i=1; i<=N; i++) cout << ans[i] << " ";
    cout << "\n";
}
