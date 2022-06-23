#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> u, w; // u : tree, w : lazy

void lazy(int n, int b, int e) {
    if(w[n] % 2 == 0) return;

    u[n] = (e - b + 1) - u[n];

    if(b != e) {
        w[n*2] += w[n];
        w[n*2 + 1] += w[n];
    }

    w[n] = 0;
}

int upd(int n, int b, int  e, int l, int r) {
    lazy(n, b, e);

    if(r < b || e < l) return u[n];

    if(l <= b && e <= r) {
        u[n] = (e - b + 1) - u[n];

        if(b != e) w[n*2]++, w[n*2 + 1]++;

        return u[n];
    }

    int lv = upd(n*2, b, (b+e)/2, l, r);
    int rv = upd(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return u[n] = lv + rv;
}

int query(int n, int b, int e, int l, int r) {
    lazy(n, b, e);

    if(r < b || e < l) return 0;
    if(l <= b && e <= r) return u[n];

    int lv = query(n*2, b, (b+e)/2, l, r);
    int rv = query(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return lv + rv;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    u.resize(N*4);
    w.resize(N*4);

    while(M--) {
        int Q, a, b; cin >> Q >> a >> b;

        if(Q == 0) upd(1, 1, N, a, b);
        else if(Q == 1) cout << query(1, 1, N, a, b) << "\n";
    }
}
