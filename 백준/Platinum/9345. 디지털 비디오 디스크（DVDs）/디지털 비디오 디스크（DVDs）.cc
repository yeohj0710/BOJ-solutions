#include <bits/stdc++.h>
#define int long long
using namespace std;

struct minTree {
    vector<int> v;

    int init(int n, int b, int e, vector<int> &u) {
        if(b == e) return v[n] = u[b];

        return v[n] = min(init(n*2, b, (b+e)/2, u), init(n*2 + 1, (b+e)/2 + 1, e, u));
    }

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] = val;
            return;
        }

        if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx, val);
        else upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

        v[n] = min(v[n*2], v[n*2 + 1]);
    }

    int val(int n, int b, int e, int l, int r) {
        if(r < b || e < l) return INT_MAX;
        if(l <= b && e <= r) return v[n];

        return min(val(n*2, b, (b+e)/2, l, r), val(n*2 + 1, (b+e)/2 + 1, e, l, r));
    }
};

struct maxTree {
    vector<int> v;

    int init(int n, int b, int e, vector<int> &u) {
        if(b == e) return v[n] = u[b];

        return v[n] = max(init(n*2, b, (b+e)/2, u), init(n*2 + 1, (b+e)/2 + 1, e, u));
    }

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] = val;
            return;
        }

        if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx, val);
        else upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

        v[n] = max(v[n*2], v[n*2 + 1]);
    }

    int val(int n, int b, int e, int l, int r) {
        if(r < b || e < l) return 0;
        if(l <= b && e <= r) return v[n];

        return max(val(n*2, b, (b+e)/2, l, r), val(n*2 + 1, (b+e)/2 + 1, e, l, r));
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        minTree f; f.v.resize(N*4);
        maxTree g; g.v.resize(N*4);

        vector<int> v(N);
        for(int i=0; i<N; i++) v[i] = i;

        f.init(1, 0, N-1, v);
        g.init(1, 0, N-1, v);

        while(M--) {
            int Q, a, b; cin >> Q >> a >> b;

            if(Q == 0) {
                swap(v[a], v[b]);

                f.upd(1, 0, N-1, a, v[a]);
                f.upd(1, 0, N-1, b, v[b]);

                g.upd(1, 0, N-1, a, v[a]);
                g.upd(1, 0, N-1, b, v[b]);
            }
            else if(Q == 1) {
                int x = f.val(1, 0, N-1, a, b);
                int y = g.val(1, 0, N-1, a, b);

                if(x == a && y == b) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
}
