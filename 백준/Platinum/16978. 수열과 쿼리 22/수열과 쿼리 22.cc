#include <bits/stdc++.h>
#define int long long
using namespace std;

struct segmentTree {
    vector<int> v;

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] = val;
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

struct s1 { int a, b; };
struct s2 { int k, l, r, n; };

bool cmpk(s2 a, s2 b) { return a.k < b.k; }

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

    vector<s1> v;
    vector<s2> u;

    for(int i=0; i<M; i++) {
        int Q; cin >> Q;

        if(Q == 1) {
            s1 tmp; cin >> tmp.a >> tmp.b;

            v.push_back(tmp);
        }
        else if(Q == 2) {
            s2 tmp; cin >> tmp.k >> tmp.l >> tmp.r;

            tmp.n = i;

            u.push_back(tmp);
        }
    }

    sort(u.begin(), u.end(), cmpk);

    vector<int> ans(M, -1);
    int cur = 0;

    for(int i=0; i<u.size(); i++) {
        while(cur < u[i].k) {
            f.upd(1, 1, N, v[cur].a, v[cur].b);
            cur++;
        }

        ans[u[i].n] = f.sum(1, 1, N, u[i].l, u[i].r);
    }

    for(int i=0; i<M; i++)
        if(ans[i] != -1) cout << ans[i] << "\n";
}
