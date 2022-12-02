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

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    sort(v.begin()+1, v.end());

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) cin >> u[i];

    segmentTree f; f.v.resize(N*4);

    for(int i=1; i<=N; i++) f.upd(1, 1, N, i, 1);

    vector<int> w(N+1);

    for(int i=N; i>=1; i--) {
        w[i] = f.kth(1, 1, N, u[i]+1);
        f.upd(1, 1, N, w[i], -1);
    }

    for(int i=1; i<=N; i++) cout << v[w[i]] << "\n";
}
