#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u, w;

int init_u(int b, int e, int n) {
    if(b == e) return u[n] = v[b];

    int lv = init_u(b, (b+e)/2, n*2);
    int rv = init_u((b+e)/2 + 1, e, n*2 + 1);

    return u[n] = min(lv, rv);
}

int init_w(int b, int e, int n) {
    if(b == e) return w[n] = v[b];

    int lv = init_w(b, (b+e)/2, n*2);
    int rv = init_w((b+e)/2 + 1, e, n*2 + 1);

    return w[n] = max(lv, rv);
}

int f(int b, int e, int n, int l, int r) {
    if(r < b || e < l) return INT_MAX;
    if(l <= b && e <= r) return u[n];

    int lv = f(b, (b+e)/2, n*2, l, r);
    int rv = f((b+e)/2 + 1, e, n*2 + 1, l, r);

    return min(lv, rv);
}

int g(int b, int e, int n, int l, int r) {
    if(r < b || e < l) return INT_MIN;
    if(l <= b && e <= r) return w[n];

    int lv = g(b, (b+e)/2, n*2, l, r);
    int rv = g((b+e)/2 + 1, e, n*2 + 1, l, r);

    return max(lv, rv);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u.resize(N*4);
    init_u(1, N, 1);

    w.resize(N*4);
    init_w(1, N, 1);

    while(M--) {
        int a, b; cin >> a >> b;
        cout << f(1, N, 1, a, b) << " " << g(1, N, 1, a, b) << "\n";
    }
}
