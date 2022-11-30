#include <bits/stdc++.h>
#define int long long
using namespace std;

struct mergeSortTree {
    vector<vector<int>> v;

    void init(int n, int b, int e, vector<int> &u) {
        if(b == e) {
            v[n].push_back(u[b-1]);
            return;
        }

        init(n*2, b, (b+e)/2, u);
        init(n*2+1, (b+e)/2+1, e, u);

        v[n].resize(v[n*2].size() + v[n*2+1].size());
        merge(v[n*2].begin(), v[n*2].end(), v[n*2+1].begin(), v[n*2+1].end(), v[n].begin());
    }

    int gt(int n, int b, int e, int l, int r, int x) {
        if(r < b || e < l) return 0;

        if(l <= b && e <= r)
            return v[n].end() - upper_bound(v[n].begin(), v[n].end(), x);

        return gt(n*2, b, (b+e)/2, l, r, x) + gt(n*2+1, (b+e)/2+1, e, l, r, x);
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mergeSortTree f;
    f.v.resize(1<<18);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f.init(1, 1, N, v);

    int M; cin >> M;

    int ans = 0;

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        a ^= ans, b ^= ans, c ^= ans;

        ans = f.gt(1, 1, N, a, b, c);

        cout << ans << "\n";
    }
}
