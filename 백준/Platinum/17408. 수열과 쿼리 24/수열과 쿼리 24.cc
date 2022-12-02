#include <bits/stdc++.h>
#define int long long
using namespace std;

struct segmentTree {
    vector<pair<int, int>> v;

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] = {val, 0};
            return;
        }

        if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx, val);
        else upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

        vector<int> u;

        u.push_back(v[n*2].first);
        u.push_back(v[n*2].second);
        u.push_back(v[n*2 + 1].first);
        u.push_back(v[n*2 + 1].second);

        sort(u.begin(), u.end(), greater<int>());

        v[n] = {u[0], u[1]};
    }

    pair<int, int> Max(int n, int b, int e, int l, int r) {
        if(r < b || e < l) return {0, 0};
        if(l <= b && e <= r) return v[n];

        vector<int> u;

        pair<int, int> p = Max(n*2, b, (b+e)/2, l, r);

        u.push_back(p.first);
        u.push_back(p.second);

        p = Max(n*2 + 1, (b+e)/2 + 1, e, l, r);

        u.push_back(p.first);
        u.push_back(p.second);

        sort(u.begin(), u.end(), greater<int>());

        return {u[0], u[1]};
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    segmentTree f; f.v.resize(N*4);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        f.upd(1, 1, N, i, x);
    }

    int M; cin >> M;

    while(M--) {
        int Q, a, b; cin >> Q >> a >> b;

        if(Q == 1) f.upd(1, 1, N, a, b);
        else if(Q == 2) {
            pair<int, int> p = f.Max(1, 1, N, a, b);

            cout << p.first + p.second << "\n";
        }
    }
}
