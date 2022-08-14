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

    int N, M; cin >> N >> M;

    vector<string> u(N);
    for(int i=0; i<N; i++) cin >> u[i];

    vector<s> adj;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int cnt = 0;

            for(int k=0; k<M; k++)
                if(u[i][k] != u[j][k]) cnt++;

            adj.push_back({i, j, cnt});
        }

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    int ans = 0, cnt = 0;
    vector<pair<int, int>> w;

    for(int i=0; i<adj.size(); i++) {
        int a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        w.push_back({a, b});

        if(cnt == N-1) break;
    }

    cout << ans << "\n";

    for(int i=0; i<w.size(); i++)
        cout << w[i].first << " " << w[i].second << "\n";
}
