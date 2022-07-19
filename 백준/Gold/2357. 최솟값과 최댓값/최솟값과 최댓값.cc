#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u, w; // v : vector, u : min, w : max

int initu(int n, int b, int e) {
    if(b == e) return u[n] = v[b];

    int lv = initu(n*2, b, (b+e)/2);
    int rv = initu(n*2 + 1, (b+e)/2 + 1, e);

    return u[n] = min(lv, rv);
}

int initw(int n, int b, int e) {
    if(b == e) return w[n] = v[b];

    int lv = initw(n*2, b, (b+e)/2);
    int rv = initw(n*2 + 1, (b+e)/2 + 1, e);

    return w[n] = max(lv, rv);
}

int f(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return INT_MAX;
    if(l <= b && e <= r) return u[n];

    int lv = f(n*2, b, (b+e)/2, l, r);
    int rv = f(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return min(lv, rv);
}

int g(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return INT_MIN;
    if(l <= b && e <= r) return w[n];

    int lv = g(n*2, b, (b+e)/2, l, r);
    int rv = g(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return max(lv, rv);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u.resize(N*4);
    initu(1, 1, N);

    w.resize(N*4);
    initw(1, 1, N);

    while(M--) {
        int a, b; cin >> a >> b;

        cout << f(1, 1, N, a, b) << " " << g(1, 1, N, a, b) << "\n";
    }
}
