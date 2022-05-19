#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<int> v, tree;

void init(int b, int e, int n) {
    if(b == e) {
        tree[n] = b;
        return;
    }

    init(b, (b+e)/2, n*2);
    init((b+e)/2 + 1, e, n*2 + 1);

    if(v[tree[n*2]] < v[tree[n*2 + 1]]) tree[n] = tree[n*2];
    else tree[n] = tree[n*2 + 1];
}

int fidx(int b, int e, int n, int l, int r) {
    if(l > e || r < b) return -1;
    if(l <= b && r >= e) return tree[n];

    int lidx = fidx(b, (b+e)/2, n*2, l, r);
    int ridx = fidx((b+e)/2 + 1, e, n*2 + 1, l, r);

    if(lidx < 0) return ridx;
    if(ridx < 0) return lidx;

    if(v[lidx] < v[ridx]) return lidx;
    else return ridx;
}

int f(int l, int r) {
    int idx = fidx(1, N, 1, l, r);
    int ret = (r-l+1)*v[idx];

    if(idx+1 <= r) ret = max(ret, f(idx+1, r));
    if(idx-1 >= l) ret = max(ret, f(l, idx-1));

    return ret;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        cin >> N;
        if(N == 0) break;

        v.resize(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        tree.resize(N*4);
        init(1, N, 1);

        cout << f(1, N) << "\n";
    }
}
