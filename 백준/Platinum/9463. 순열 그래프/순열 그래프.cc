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

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        segmentTree f; f.v.resize(N*4);

        vector<int> v(N+1), u(N+1);

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            v[x] = i;
        }

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            u[i] = v[x];
        }

        int ans = 0;

        for(int i=1; i<=N; i++) {
            ans += (u[i] - 1) - f.sum(1, 1, N, 1, u[i]);

            f.upd(1, 1, N, u[i], 1);
        }

        cout << ans << "\n";
    }
}
