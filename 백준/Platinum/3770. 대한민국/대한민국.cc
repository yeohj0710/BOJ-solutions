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

    for(int t=1; t<=T; t++) {
        int N, M, K; cin >> N >> M >> K;

        N = max(N, M);

        vector<pair<int, int>> v(K);

        for(int i=0; i<K; i++)
            cin >> v[i].first >> v[i].second;

        sort(v.begin(), v.end());

        segmentTree f; f.v.resize(N*4);

        int ans = 0;

        for(int i=0; i<K; i++) {
            ans += f.sum(1, 1, N, v[i].second+1, N);
            f.upd(1, 1, N, v[i].second, 1);
        }

        cout << "Test case " << t << ": " << ans << "\n";
    }
}
