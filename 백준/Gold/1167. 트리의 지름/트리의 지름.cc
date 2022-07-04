#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<pair<int, int>>> adj;
int Max = 0, node;

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

    for(int i=0; i<N; i++) {
        int a; cin >> a;
        while(true) {
            int b; cin >> b;
            if(b == -1) break;

            int c; cin >> c;

            adj[a].push_back({b, c});
        }
    }

    f(1, 0, 0);

    Max = 0;
    f(node, 0, 0);

    cout << Max << "\n";
}
