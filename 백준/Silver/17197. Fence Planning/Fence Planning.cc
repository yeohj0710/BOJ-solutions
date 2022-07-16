#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int sx, sy, lx, ly; };
vector<s> v;
vector<int> u;

int f(int x) {
    if(u[x] == x) return x;
    else return u[x] = f(u[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) {
        cin >> v[i].sx >> v[i].sy;

        v[i].lx = v[i].sx;
        v[i].ly = v[i].sy;
    }

    u.resize(N+1);
    for(int i=1; i<=N; i++) u[i] = i;

    while(M--) {
        int a, b; cin >> a >> b;

        if(f(a) != f(b)) {
            v[f(b)].sx = min(v[f(b)].sx, v[f(a)].sx);
            v[f(b)].sy = min(v[f(b)].sy, v[f(a)].sy);
            v[f(b)].lx = max(v[f(b)].lx, v[f(a)].lx);
            v[f(b)].ly = max(v[f(b)].ly, v[f(a)].ly);

            u[f(a)] = f(b);
        }
    }

    int ans = INT_MAX;
    for(int i=1; i<=N; i++)
        ans = min(ans, ((v[f(i)].lx - v[f(i)].sx) + (v[f(i)].ly - v[f(i)].sy)) * 2);

    cout << ans << "\n";
}
