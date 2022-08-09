#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u, w;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    v.resize(N+1);

    for(int i=1; i<=N; i++) v[i] = i;

    u.resize(N+1);
    w.resize(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        if(x == 1) u[i] = 1;
        else w[i] = 1;
    }

    while(M--) {
        int a, b; cin >> a >> b;

        if(f(a) != f(b)) {
            u[f(b)] += u[f(a)];
            w[f(b)] += w[f(a)];

            v[f(a)] = f(b);
        }
    }

    while(K--) {
        int x; cin >> x;

        if(u[f(x)] > w[f(x)]) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
