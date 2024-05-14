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

    int kth(int n, int b, int e, int ran) {
        if(b == e) return b;

        if(ran <= v[n*2]) return kth(n*2, b, (b+e)/2, ran);
        else return kth(n*2+1, (b+e)/2+1, e, ran-v[n*2]);
    }
};

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    segmentTree f;
    f.v.resize(1e6*4);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);

    for(int i=1; i<=N; i++) cin >> v[i];

    for(int i=1; i<=N-1; i++) {
        if(v[i] != v[i+1]) f.upd(1, 1, 1e6, i, 1);
    }

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) {
            int pre = v[b];

            v[b] = c;

            if(b > 1) {
                if((pre != v[b-1]) && (v[b] == v[b-1])) f.upd(1, 1, 1e6, b-1, -1);
                else if((pre == v[b-1]) && (v[b] != v[b-1])) f.upd(1, 1, 1e6, b-1, 1);
            }
            if(b < N) {
                if((pre != v[b+1]) && (v[b] == v[b+1])) f.upd(1, 1, 1e6, b, -1);
                else if((pre == v[b+1]) && (v[b] != v[b+1])) f.upd(1, 1, 1e6, b, 1);
            }
        }
        else if(a == 2) {
            cout << f.sum(1, 1, 1e6, b, c-1) + 1 << "\n";
        }
    }
}
