#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u; // v : array, u : tree

int init(int n, int b, int e) {
    if(b == e) return u[n] = v[b];

    int lv = init(n*2, b, (b+e)/2);
    int rv = init(n*2 + 1, (b+e)/2 + 1, e);

    return u[n] = lv + rv;
}

void upd(int n, int b, int e, int idx, int diff) {
    if(idx < b || e < idx) return;

    u[n] += diff;

    if(b < e) {
        upd(n*2, b, (b+e)/2, idx, diff);
        upd(n*2 + 1, (b+e)/2 + 1, e, idx, diff);
    }
}

int sum(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return 0;
    if(l <= b && e <= r) return u[n];

    int lv = sum(n*2, b, (b+e)/2, l, r);
    int rv = sum(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return lv + rv;
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

        if(Q == 1) {
            int diff = b - v[a];
            v[a] = b;
            upd(1, 1, N, a, diff);
        }
        else if(Q == 2) cout << sum(1, 1, N, a, b) << "\n";
    }
}
