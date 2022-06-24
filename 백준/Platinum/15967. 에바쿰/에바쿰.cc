#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u, w; // v : array, u : tree, w : lazy

int init(int n, int b, int e) {
    if(b == e) return u[n] = v[b];

    int lv = init(n*2, b, (b+e)/2);
    int rv = init(n*2 + 1, (b+e)/2 + 1, e);

    return u[n] = lv + rv;
}

void lazy(int n, int b, int e) {
    if(w[n] == 0) return;

    u[n] += (e-b+1)*w[n];

    if(b != e) {
        w[n*2] += w[n];
        w[n*2 + 1] += w[n];
    }

    w[n] = 0;
}

int f(int n, int b, int e, int l, int r) {
    lazy(n, b, e);

    if(r < b || e < l) return 0;
    if(l <= b && e <= r) return u[n];

    int lv = f(n*2, b, (b+e)/2, l, r);
    int rv = f(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return lv + rv;
}

int g(int n, int b, int  e, int l, int r, int add) {
    lazy(n, b, e);

    if(r < b || e < l) return u[n];

    if(l <= b && e <= r) {
        w[n] += add;
        lazy(n, b, e);
        return u[n];
    }

    int lv = g(n*2, b, (b+e)/2, l, r, add);
    int rv = g(n*2 + 1, (b+e)/2 + 1, e, l, r, add);

    return u[n] = lv + rv;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u.resize(N*4);
    init(1, 1, N);

    w.resize(N*4);

    M += K;
    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int l, r; cin >> l >> r;
            cout << f(1, 1, N, l, r) << "\n";
        }
        else if(Q == 2) {
            int l, r, add; cin >> l >> r >> add;
            g(1, 1, N, l, r, add);
        }
    }
}
