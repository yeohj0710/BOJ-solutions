#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u1, u2, w; // v : array, u1 : min tree, u2 : sum tree, w : lazy

int init1(int n, int b, int e) {
    if(b == e) return u1[n] = v[b];

    int lv = init1(n*2, b, (b+e)/2);
    int rv = init1(n*2 + 1, (b+e)/2 + 1, e);

    return u1[n] = min(lv, rv);
}

int init2(int n, int b, int e) {
    if(b == e) return u2[n] = v[b];

    int lv = init2(n*2, b, (b+e)/2);
    int rv = init2(n*2 + 1, (b+e)/2 + 1, e);

    return u2[n] = lv + rv;
}

void lazy(int n, int b, int e) {
    if(w[n] == 0) return;

    u1[n] += w[n];
    u2[n] += (e-b+1)*w[n];

    if(b != e) {
        w[n*2] += w[n];
        w[n*2 + 1] += w[n];
    }

    w[n] = 0;
}

void f(int n, int b, int e, int l, int r, int add) {
    lazy(n, b, e);

    if(r < b || e < l) return;

    if(l <= b && e <= r) {
        if(b != e) {
            w[n*2] += add;
            w[n*2 + 1] += add;
        }
        u1[n] += add;
        u2[n] += (e-b+1)*add;
        return;
    }

    f(n*2, b, (b+e)/2, l, r, add);
    f(n*2 + 1, (b+e)/2 + 1, e, l, r, add);

    u1[n] = min(u1[n*2], u1[n*2 + 1]);
    u2[n] = u2[n*2] + u2[n*2 + 1];
}

int g(int n, int b, int e, int l, int r) {
    lazy(n, b, e);

    if(r < b || e < l) return INT_MAX;
    if(l <= b && e <= r) return u1[n];

    int lv = g(n*2, b, (b+e)/2, l, r);
    int rv = g(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return min(lv, rv);
}

int h(int n, int b, int  e, int l, int r) {
    lazy(n, b, e);

    if(r < b || e < l) return 0;
    if(l <= b && e <= r) return u2[n];

    int lv = h(n*2, b, (b+e)/2, l, r);
    int rv = h(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return lv + rv;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u1.resize(N*4);
    init1(1, 1, N);

    u2.resize(N*4);
    init2(1, 1, N);

    w.resize(N*4);

    while(M--) {
        char Q; cin >> Q;

        if(Q == 'M') {
            int l, r; cin >> l >> r;
            cout << g(1, 1, N, l, r) << "\n";
        }
        else if(Q == 'P') {
            int l, r, add; cin >> l >> r >> add;
            f(1, 1, N, l, r, add);
        }
        else if(Q == 'S') {
            int l, r; cin >> l >> r;
            cout << h(1, 1, N, l, r) << "\n";
        }
    }
}
