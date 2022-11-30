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

    int ord(int n, int b, int e, int l, int r, int x) {
        if(r < b || e < l) return 0;

        if(l <= b && e <= r)
            return upper_bound(v[n].begin(), v[n].end(), x) - v[n].begin();

        return ord(n*2, b, (b+e)/2, l, r, x) + ord(n*2+1, (b+e)/2+1, e, l, r, x);
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    mergeSortTree f;
    f.v.resize(1<<18);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    f.init(1, 1, N, v);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        int l = -1e9, r = 1e9, ans = 1e9;

        while(l <= r) {
            int m = (l + r) / 2;

            int x = f.ord(1, 1, N, a, b, m);

            if(x >= c) {
                ans = min(ans, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        cout << ans << "\n";
    }
}
