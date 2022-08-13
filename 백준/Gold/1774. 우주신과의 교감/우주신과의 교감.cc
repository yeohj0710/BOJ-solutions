#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double  a, b, c; };

bool cmp(s x, s y) { return x.c < y.c; }

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<double, double>> u(N+1);

    for(int i=1; i<=N; i++) cin >> u[i].first >> u[i].second;

    vector<s> adj;

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++)
            adj.push_back({i, j, sqrt(pow(u[i].first - u[j].first, 2) + pow(u[i].second - u[j].second, 2))});

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b;

        adj.push_back({a, b, 0});
    }

    sort(adj.begin(), adj.end(), cmp);

    double ans = 0, cnt = 0;

    for(int i=0; i<adj.size(); i++) {
        double a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        if(cnt == N-1) break;
    }

    cout << fixed;
    cout.precision(2);

    cout << ans << "\n";
}
