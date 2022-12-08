#include <bits/stdc++.h>
#define int long long
using namespace std;

// referred solution for study

const int MAX = 1e5 + 1, S = (1 << ((int)log2(MAX) + 1));

struct node {
    int l, r, x;

    node() : l(0), r(0), x(0) {};
    node(int l_, int r_, int x_) : l(l_), r(r_), x(x_) {};
};

void init(vector<node> &v) {
    for(int i=1; i<=S/2; i++)
        v[i].l = i*2, v[i].r = i*2 + 1;
}

void upd(int n, int b, int e, int idx, int val, vector<node> &v) {
    if(b == e) return;

    int nl = v[n].l, nr = v[n].r;

    if(idx <= (b+e)/2) {
        v[n].l = v.size();
        v.push_back(node(v[nl].l, v[nl].r, v[nl].x + val));
        upd(v[n].l, b, (b+e)/2, idx, val, v);
    }
    else {
        v[n].r = v.size();
        v.push_back(node(v[nr].l, v[nr].r, v[nr].x + val));
        upd(v[n].r, (b+e)/2 + 1, e, idx, val, v);
    }
}

int sum(int n, int b, int e, int l, int r, vector<node> &v) {
    if(r < b || e < l) return 0;
    if(l <= b && e <= r) return v[n].x;

    return sum(v[n].l, b, (b+e)/2, l, r, v) + sum(v[n].r, (b+e)/2 + 1, e, l, r, v);
}

int root[MAX + 1];
vector<node> v;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<vector<int>> vy(MAX + 1);
        v.clear(); v.resize(S);

        while(N--) {
            int x, y; cin >> x >> y;

            vy[x+1].push_back(y+1);
        }

        init(v);
        root[0] = 1;

        for(int i=1; i<=MAX; i++) {
            root[i] = v.size();

            int pr = root[i-1];

            v.push_back(node(v[pr].l, v[pr].r, v[pr].x));

            for(int j=0; j<vy[i].size(); j++) {
                v[root[i]].x++;
                upd(root[i], 1, MAX, vy[i][j], 1, v);
            }
        }

        int ans = 0;

        while(M--) {
            int a, b, c, d; cin >> a >> b >> c >> d;

            ans += sum(root[b+1], 1, MAX, c+1, d+1, v)
                   - sum(root[a], 1, MAX, c+1, d+1, v);
        }

        cout << ans << "\n";
    }
}
