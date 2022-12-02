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

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N), u(N);
        for(int i=0; i<N; i++) {
            cin >> v[i];
            u[i] = v[i];
        }

        sort(u.begin(), u.end());
        u.erase(unique(u.begin(), u.end()), u.end());

        vector<int> w(N);
        for(int i=0; i<v.size(); i++)
            w[i] = lower_bound(u.begin(), u.end(), v[i]) - u.begin() + 1;

        v = w;

        segmentTree f; f.v.resize(N*4);

        int ans = 0;

        for(int i=0; i<N; i++) {
            ans += f.sum(1, 1, N, v[i]+1, N);
            f.upd(1, 1, N, v[i], 1);
        }

        cout << ans << "\n";
    }
}
