#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u, w; // v : array, u : tree, w : lazy

int init(int n, int b, int e) {
    if(b == e) return u[n] = v[b];

    int lv = init(n*2, b, (b+e)/2);
    int rv = init(n*2 + 1, (b+e)/2 + 1, e);

    return u[n] = lv ^ rv;
}

void lazy(int n, int b, int e) {
    if(w[n] == 0) return;

    if((e - b + 1) % 2 == 1) u[n] ^= w[n];

    if(b != e) {
        w[n*2] ^= w[n];
        w[n*2 + 1] ^= w[n];
    }

    w[n] = 0;
}

void f(int n, int b, int e, int l, int r, int val) {
    lazy(n, b, e);

    if(r < b || e < l) return;

    if(l <= b && e <= r) {
        w[n] = val;
        lazy(n, b, e);
        return;
    }

    f(n*2, b, (b+e)/2, l, r, val);
    f(n*2 + 1, (b+e)/2 + 1, e, l, r, val);

    u[n] = u[n*2] ^ u[n*2 + 1];
}

int g(int n, int b, int e, int idx) {
    lazy(n, b, e);

    if(b == e) return u[n];

    if(idx <= (b+e)/2) return g(n*2, b, (b+e)/2, idx);
    else return g(n*2 + 1, (b+e)/2 + 1, e, idx);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    u.resize(N*4);
    init(1, 0, N-1);

    w.resize(N*4);

    int M; cin >> M;

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int l, r, val; cin >> l >> r >> val;
            f(1, 0, N-1, l, r, val);
        }
        else if(Q == 2) {
            int idx; cin >> idx;
            cout << g(1, 0, N-1, idx) << "\n";
        }
    }
}
