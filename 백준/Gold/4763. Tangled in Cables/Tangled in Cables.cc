#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { double a, b, c; };

bool cmp(s x, s y) { return x.c < y.c; }

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double K; cin >> K;

    int N; cin >> N;

    map<string, int> m;

    for(int i=1; i<=N; i++) {
        string str; cin >> str;

        m[str] = i;
    }

    int M; cin >> M;

    vector<s> adj(M);

    for(int i=0; i<M; i++) {
        string x, y; cin >> x >> y >> adj[i].c;

        adj[i].a = m[x], adj[i].b = m[y];
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
    cout.precision(1);

    if(ans <= K) cout << "Need " << ans << " miles of cable\n";
    else cout << "Not enough cable\n";
}
