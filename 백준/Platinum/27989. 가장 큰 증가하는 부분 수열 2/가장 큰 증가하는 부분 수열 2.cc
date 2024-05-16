#include <bits/stdc++.h>
#define int long long
using namespace std;

struct segmentTree {
    vector<int> v;

    int init(int n, int b, int e, vector<int> &u) {
        if(b == e) return v[n] = u[b];

        return v[n] = init(n*2, b, (b+e)/2, u)
                       + init(n*2 + 1, (b+e)/2 + 1, e, u);
    }

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] = val;
            return;
        }

        if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx, val);
        else upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

        v[n] = max(v[n*2], v[n*2 + 1]);
    }

    int mx(int n, int b, int e, int l, int r) {
        if(r < b || e < l) return 0;
        if(l <= b && e <= r) return v[n];

        return max(mx(n*2, b, (b+e)/2, l, r), mx(n*2 + 1, (b+e)/2 + 1, e, l, r));
    }
};

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    segmentTree f;
    f.v.resize(1e6*4);

    int N; cin >> N;

    vector<int> v(N), u;
    for(int i=0; i<N; i++) cin >> v[i];

    u = v;

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    vector<int> w(N);
    for(int i=0; i<v.size(); i++)
        w[i] = lower_bound(u.begin(), u.end(), v[i]) - u.begin() + 1;

    for(int i=0; i<N; i++) {
        int mx = f.mx(1, 1, 1e6, 1, w[i] - 1);

        f.upd(1, 1, 1e6, w[i], mx + v[i]);
    }

    cout << f.mx(1, 1, 1e6, 1, N) << "\n";
}
