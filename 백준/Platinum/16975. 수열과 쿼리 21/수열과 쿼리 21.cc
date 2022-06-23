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

int upd(int n, int b, int e, int l, int r, int add) {
    lazy(n, b, e);

    if(r < b || e < l) return u[n];

    if(l <= b && e <= r) {
        w[n] += add;
        lazy(n, b, e);
        return u[n];
    }

    int lv = upd(n*2, b, (b+e)/2, l, r, add);
    int rv = upd(n*2 + 1, (b+e)/2 + 1, e, l, r, add);

    return u[n] = lv + rv;
}

int query(int n, int b, int e, int idx) {
    lazy(n, b, e);

    if(b == e) return u[n];

    if(idx <= (b+e)/2) return query(n*2, b, (b+e)/2, idx);
    else return query(n*2 + 1, (b+e)/2 + 1, e, idx);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u.resize(N*4);
    init(1, 1, N);

    w.resize(N*4);

    int M; cin >> M;

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int a, b, c; cin >> a >> b >> c;
            upd(1, 1, N, a, b, c);
        }
        else if(Q == 2) {
            int a; cin >> a;
            cout << query(1, 1, N, a) << "\n";
        }
    }
}
