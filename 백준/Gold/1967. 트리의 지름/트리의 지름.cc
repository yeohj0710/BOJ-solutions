#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<pair<int, int>>> adj;
int node, Max = 0;

void f(int cur, int pre, int sum) {
    if(sum > Max) {
        Max = sum;
        node = cur;
    }

    for(int i=0; i<adj[cur].size(); i++) {
        int nex = adj[cur][i].first;

        if(nex != pre) f(nex, cur, sum + adj[cur][i].second);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    adj.resize(N+1);

    for(int i=0; i<N-1; i++) {
        int a, b, c; cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    f(1, 0, 0);

    Max = 0;
    f(node, 0, 0);

    cout << Max << "\n";
}
