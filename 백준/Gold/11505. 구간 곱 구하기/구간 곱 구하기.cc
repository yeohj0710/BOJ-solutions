#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u; // v : vector, u : tree
int mod = (int)(1e9 + 7);

int init(int n, int b, int e) {
    if(b == e) return u[n] = v[b];

    int lv = init(n*2, b, (b+e)/2);
    int rv = init(n*2 + 1, (b+e)/2 + 1, e);

    return u[n] = (lv * rv) % mod;
}

int upd(int n, int b, int e, int idx, int val) {
    if(idx < b || e < idx) return u[n];
    if(b == e) return u[n] = val;

    int lv = upd(n*2, b, (b+e)/2, idx, val);
    int rv = upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

    return u[n] = (lv * rv) % mod;
}

int f(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return 1;
    if(l <= b && e <= r) return u[n];

    int lv = f(n*2, b, (b+e)/2, l, r);
    int rv = f(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return (lv * rv) % mod;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u.resize(N*4);
    init(1, 1, N);

    M += K;
    while(M--) {
        int Q, a, b; cin >> Q >> a >> b;

        if(Q == 1) upd(1, 1, N, a, b);
        else if(Q == 2) cout << f(1, 1, N, a, b) << "\n";
    }
}
