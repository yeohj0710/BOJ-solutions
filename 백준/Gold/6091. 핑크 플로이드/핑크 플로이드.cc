#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b, c; };

bool cmp(s x, s y) { return x.c < y.c; }

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> adj;

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            int x; cin >> x;

            adj.push_back({i, j, x});
        }

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    vector<vector<int>> u(N+1);

    for(int i=0; i<adj.size(); i++) {
        int a = adj[i].a, b = adj[i].b;

        if(f(a) == f(b)) continue;

        u[a].push_back(b);
        u[b].push_back(a);

        v[f(a)] = f(b);
    }

    for(int i=1; i<=N; i++) {
        sort(u[i].begin(), u[i].end());

        cout << u[i].size() << " ";

        for(int j=0; j<u[i].size(); j++) cout << u[i][j] << " ";

        cout << "\n";
    }
}
