#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;

int dfs(int x) {
    vector<int> v;

    for(int y : adj[x]) v.push_back(dfs(y));

    sort(v.begin(), v.end(), greater<int>());

    int ret = 0;
    for(int i=0; i<v.size(); i++) ret = max(ret, v[i]+(i+1));

    return ret;
}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    adj.resize(N);
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x != -1) adj[x].push_back(i);
    }

    cout << dfs(0) << "\n";
}
