#include <bits/stdc++.h>
#define int long long
using namespace std;

struct segmentTree {
    vector<int> v;

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] += val;
            return;
        }

        if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx, val);
        else upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

        v[n] = v[n*2] + v[n*2 + 1];
    }

    int sum(int n, int b, int e, int l, int r) {
        if(r < b || e < l) return 0;
        if(l <= b && e <= r) return v[n];

        return sum(n*2, b, (b+e)/2, l, r)
                + sum(n*2 + 1, (b+e)/2 + 1, e, l, r);
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    segmentTree f, g;

    f.v.resize(2e5 * 4);
    g.v.resize(2e5 * 4);

    int N; cin >> N;

    int ans = 1, mod = 1e9 + 7;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        int a = f.sum(1, 0, 2e5, 0, x-1);
        int b = f.sum(1, 0, 2e5, x+1, 2e5);

        int c = g.sum(1, 0, 2e5, 0, x-1);
        int d = g.sum(1, 0, 2e5, x+1, 2e5);

        int sum = (x*c - a) + (b - x*d);

        if(i > 0) ans = (ans * (sum % mod)) % mod;

        f.upd(1, 0, 2e5, x, x);
        g.upd(1, 0, 2e5, x, 1);
    }

    cout << ans << "\n";
}
