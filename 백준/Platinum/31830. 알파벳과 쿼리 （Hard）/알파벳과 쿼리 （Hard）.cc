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
};

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    string s; cin >> s;

    vector<int> v(n);
    for(int i=1; i<n; i++) v[i] = (s[i] - s[i-1] + 26) % 26;

    segmentTree f;
    f.v.resize(1e6*4);

    for(int i=0; i<n; i++)
        if(v[i] != 0) f.upd(1, 1, 1e6, i, 1);

    while(m--) {
        int a, b, c; cin >> a >> b >> c;

        b--, c--;

        if(a == 1) {
            cout << f.sum(1, 1, 1e6, b+1, c) + 1 << "\n";
        }
        else if(a == 2) {
            if(b > 0) {
                v[b] = (v[b] + 1) % 26;

                if(v[b] == 0) f.upd(1, 1, 1e6, b, -1);
                else if(v[b] == 1) f.upd(1, 1, 1e6, b, 1);
            }

            if(c+1 < n) {
                v[c+1] = (v[c+1] - 1 + 26) % 26;

                if(v[c+1] == 0) f.upd(1, 1, 1e6, c+1, -1);
                else if(v[c+1] == 25) f.upd(1, 1, 1e6, c+1, 1);
            }
        }
    }
}
