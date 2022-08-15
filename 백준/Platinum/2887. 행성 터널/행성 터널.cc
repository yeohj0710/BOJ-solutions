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

    vector<pair<int, int>> vx(N+1), vy(N+1), vz(N+1);

    for(int i=1; i<=N; i++) {
        cin >> vx[i].first >> vy[i].first >> vz[i].first;

        vx[i].second = vy[i].second = vz[i].second = i;
    }

    sort(vx.begin()+1, vx.end());
    sort(vy.begin()+1, vy.end());
    sort(vz.begin()+1, vz.end());

    vector<s> adj;

    for(int i=2; i<=N; i++) adj.push_back({vx[i-1].second, vx[i].second, vx[i].first - vx[i-1].first});
    for(int i=2; i<=N; i++) adj.push_back({vy[i-1].second, vy[i].second, vy[i].first - vy[i-1].first});
    for(int i=2; i<=N; i++) adj.push_back({vz[i-1].second, vz[i].second, vz[i].first - vz[i-1].first});

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    int ans = 0, cnt = 0;

    for(int i=0; i<adj.size(); i++) {
        int a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        if(cnt == N-1) break;
    }

    cout << ans << "\n";
}
