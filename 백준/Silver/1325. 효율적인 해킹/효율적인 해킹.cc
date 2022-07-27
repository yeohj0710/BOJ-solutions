#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
int cnt;

void f(int x) {
    vis[x] = true;
    cnt++;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(!vis[y]) f(y);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    adj.resize(N+1);

    while(M--) {
        int a, b; cin >> a >> b;

        adj[b].push_back(a);
    }

    int Max = 0;
    vector<int> v;

    for(int i=1; i<=N; i++) {
        vis.clear();
        vis.resize(N+1);

        cnt = 0;

        f(i);

        if(cnt > Max) {
            Max = cnt;

            v.clear();
            v.push_back(i);
        }
        else if(cnt == Max) v.push_back(i);
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}
