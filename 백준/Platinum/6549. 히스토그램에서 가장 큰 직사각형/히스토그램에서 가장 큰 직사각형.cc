#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<int> v, u;

int init(int b, int e, int n) {
    if(b == e) return u[n] = b;

    int lv = init(b, (b+e)/2, n*2);
    int rv = init((b+e)/2 + 1, e, n*2 + 1);

    if(v[lv] < v[rv]) return u[n] = lv;
    else return u[n] = rv;
}

int g(int b, int e, int n, int l, int r) {
    if(r < b || e < l) return -1;
    if(l <= b && e <= r) return u[n];

    int lv = g(b, (b+e)/2, n*2, l, r);
    int rv = g((b+e)/2 + 1, e, n*2 + 1, l, r);

    if(lv < 0) return rv;
    if(rv < 0) return lv;

    if(v[lv] < v[rv]) return lv;
    else return rv;
}

int f(int l, int r) {
    int idx = g(1, N, 1, l, r);
    int ret = (r-l+1)*v[idx];

    if(idx+1 <= r) ret = max(ret, f(idx+1, r));
    if(idx-1 >= l) ret = max(ret, f(l, idx-1));

    return ret;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        cin >> N;
        if(N == 0) break;

        v.resize(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        u.resize(N*4);
        init(1, N, 1);

        cout << f(1, N) << "\n";
    }
}
