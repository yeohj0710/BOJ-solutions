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

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    segmentTree f; f.v.resize(4e5 * 4);

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++) {
        cin >> v[i].first >> v[i].second;

        v[i].first += 2e5;

        f.upd(1, 0, 4e5, v[i].first, 1);
    }

    sort(v.begin(), v.end(), cmp);

    int ans = 0, mod = 1e9 + 7, x = 0;

    for(int i=0; i<N; i++) {
        if(i == x) {
            while(true) {
                f.upd(1, 0, 4e5, v[x].first, -1);

                x++;

                if(x == N || v[x].second != v[x-1].second) break;
            }
        }

        int a = f.sum(1, 0, 4e5, 0, v[i].first-1);
        int b = f.sum(1, 0, 4e5, v[i].first+1, 4e5);

        ans = (ans + a*b) % mod;
    }

    cout << ans << "\n";
}
