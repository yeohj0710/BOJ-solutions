#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u;
int mod = 1e9 + 7;

int init(int b, int e, int n) {
    if(b == e) return u[n] = v[b];

    int lv = init(b, (b+e)/2, n*2);
    int rv = init((b+e)/2 + 1, e, n*2 + 1);

    return u[n] = (lv * rv) % mod;
}

int upd(int b, int e, int n, int idx, int val) {
    if(idx < b || e < idx) return u[n];
    if(b == e) return u[n] = val;

    int lv = upd(b, (b+e)/2, n*2, idx, val);
    int rv = upd((b+e)/2 + 1, e, n*2 + 1, idx, val);

    return u[n] = (lv * rv) % mod;
}

int mul(int b, int e, int n, int l, int r) {
    if(r < b || e < l) return 1;
    if(l <= b && e <= r) return u[n];

    int lv = mul(b, (b+e)/2, n*2, l, r);
    int rv = mul((b+e)/2 + 1, e, n*2 + 1, l, r);

    return (lv * rv) % mod;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u.resize(N*4);
    init(1, N, 1);

    M += K;
    while(M--) {
        int Q, a, b; cin >> Q >> a >> b;

        if(Q == 1) upd(1, N, 1, a, b);
        else if(Q == 2) cout << mul(1, N, 1, a, b) << "\n";
    }
}
