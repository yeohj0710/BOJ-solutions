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

vector<vector<pair<int, int>>> ad;
int Max = 0, node = 0;

void g(int cur, int pre, int sum) {
    if(sum > Max) {
        Max = sum;
        node = cur;
    }

    for(int i=0; i<ad[cur].size(); i++)
        if(ad[cur][i].first != pre) g(ad[cur][i].first, cur, sum + ad[cur][i].second);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> adj(M);

    for(int i=0; i<M; i++)
        cin >> adj[i].a >> adj[i].b >> adj[i].c;

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N);
    for(int i=0; i<N; i++) v[i] = i;

    int ans = 0, cnt = 0;
    vector<s> u;

    for(int i=0; i<adj.size(); i++) {
        int a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        u.push_back({a, b, c});

        if(cnt == N-1) break;
    }

    ad.resize(N);

    for(int i=0; i<u.size(); i++) {
        int a = u[i].a, b = u[i].b, c = u[i].c;

        ad[a].push_back({b, c});
        ad[b].push_back({a, c});
    }

    g(0, -1, 0);

    Max = 0;

    g(node, -1, 0);

    cout << ans << "\n" << Max << "\n";
}
