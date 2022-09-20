#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u, w, vv;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    u.resize(N+1);
    w.resize(N+1);
    int ans = 0;

    for(int i=1; i<=N; i++) cin >> u[i];
    for(int i=1; i<=N; i++) {
        cin >> w[i];

        if(w[i] > u[i]) ans++;
    }

    vv.resize(N+1, 1);

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int a, b; cin >> a >> b;

            if(f(a) == f(b)) continue;

            int sum = 0;

            if(w[f(a)] > u[f(a)]) sum += vv[f(a)];
            if(w[f(b)] > u[f(b)]) sum += vv[f(b)];

            u[f(b)] += u[f(a)];
            w[f(b)] += w[f(a)];
            vv[f(b)] += vv[f(a)];

            v[f(a)] = f(b);

            if(w[f(b)] > u[f(a)]) ans += vv[f(b)] - sum;
            else ans -= sum;
        }
        else if(Q == 2) cout << ans << "\n";
    }
}
