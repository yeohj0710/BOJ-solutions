#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u; // v : vector, u : tree

int init(int n, int b, int e) {
    if(b == e) return u[n] = v[b];

    int lv = init(n*2, b, (b+e)/2);
    int rv = init(n*2 + 1, (b+e)/2 + 1, e);

    return u[n] = min(lv, rv);
}

int f(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return INT_MAX;
    if(l <= b && e <= r) return u[n];

    int lv = f(n*2, b, (b+e)/2, l, r);
    int rv = f(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return min(lv, rv);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    u.resize(N*4);
    init(1, 1, N);

    while(M--) {
        int a, b; cin >> a >> b;

        cout << f(1, 1, N, a, b) << "\n";
    }
}
