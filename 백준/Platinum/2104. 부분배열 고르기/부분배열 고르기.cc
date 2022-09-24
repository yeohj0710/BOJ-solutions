#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<int> v, u, w;

int init(int n, int b, int e) {
    if(b == e) return u[n] = b;

    int lv = init(n*2, b, (b+e)/2);
    int rv = init(n*2 + 1, (b+e)/2 + 1, e);

    if(v[lv] < v[rv]) return u[n] = lv;
    else return u[n] = rv;
}

int g(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return -1;
    if(l <= b && e <= r) return u[n];

    int lv = g(n*2, b, (b+e)/2, l, r);
    int rv = g(n*2 + 1, (b+e)/2 + 1, e, l, r);

    if(lv < 0) return rv;
    if(rv < 0) return lv;

    if(v[lv] < v[rv]) return lv;
    else return rv;
}

int f(int l, int r) {
    int idx = g(1, 1, N, l, r);
    int ret = (w[r] - w[l-1]) * v[idx];

    if(idx+1 <= r) ret = max(ret, f(idx+1, r));
    if(idx-1 >= l) ret = max(ret, f(l, idx-1));

    return ret;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N+1);
    w.resize(N+1);

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        w[i] = w[i-1] + v[i];
    }

    u.resize(N*4);
    init(1, 1, N);

    cout << f(1, N) << "\n";
}
