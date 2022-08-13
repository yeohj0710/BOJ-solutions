#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double a, b, c; };

bool cmp(s x, s y) { return x.c > y.c; }

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

    vector<s> adj(M);
    double sum = 0;

    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b;

        adj[i].a = a;
        adj[i].b = b;
        adj[i].c = sqrt(pow(u[a].first - u[b].first, 2) + pow(u[a].second - u[b].second, 2));

        sum += adj[i].c;
    }

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    double ans = 0, cnt = 0;

    for(int i=0; i<M; i++) {
        double a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        if(cnt == N-1) break;
    }

    cout << fixed;
    cout.precision(3);

    ans = sum - ans;

    cout << ans << "\n";
}
