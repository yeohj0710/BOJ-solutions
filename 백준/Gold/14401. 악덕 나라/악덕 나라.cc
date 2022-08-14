#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b, c; };

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

    vector<pair<int, int>> u(N+1);

    for(int i=1; i<=N; i++) cin >> u[i].first >> u[i].second;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    int cnt = 0;

    while(M--) {
        int a, b; cin >> a >> b;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        cnt++;
    }

    if(cnt >= N-1) {
        cout << 0 << "\n";
        return 0;
    }

    vector<s> adj;

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++)
            adj.push_back({i, j, pow(u[i].first - u[j].first, 2) + pow(u[i].second - u[j].second, 2)});

    sort(adj.begin(), adj.end(), cmp);

    int ans = 0;

    for(int i=0; i<adj.size(); i++) {
        int a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        bool check = true;

        for(int j=1; j<=N; j++) {
            if(j == a || j == b) continue;

            if((u[j].second - u[a].second) * (u[b].first - u[a].first)
               == (u[b].second - u[a].second) * (u[j].first - u[a].first)
               && ((u[a].first < u[j].first && u[j].first < u[b].first)
                   || (u[b].first < u[j].first && u[j].first < u[a].first))) check = false;
        }

        if(!check) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        if(cnt == N-1) break;
    }

    cout << ans << "\n";
}
