#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, tree;
struct Q { int a, b, c; }; vector<Q> q;

int init(int b, int e, int n) {
    if(b == e) return tree[n] = v[b];

    int l = init(b, (b+e)/2, n*2);
    int r = init((b+e)/2 + 1, e, n*2 + 1);

    return tree[n] = l + r;
}

void update(int b, int e, int n, int idx, int diff) {
    if(idx < b || idx > e) return;

    tree[n] += diff;

    if(b < e) {
        update(b, (b+e)/2, n*2, idx, diff);
        update((b+e)/2 + 1, e, n*2 + 1, idx, diff);
    }
}

int f(int b, int e, int n, int l, int r) {
    if(l > e || r < b) return 0;
    if(l <= b && r >= e) return tree[n];

    return f(b, (b+e)/2, n*2, l, r) + f((b+e)/2 + 1, e, n*2 + 1, l, r);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    for(int i=0; i<N; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    for(int i=0; i<M+K; i++) {
        int a, b, c; cin >> a >> b >> c;
        q.push_back({a, b, c});
    }

    int h = (int)ceil(log2(N));
    int s = (1 << (h+1));
    tree.resize(s);

    init(0, N-1, 1);

    for(int i=0; i<q.size(); i++) {
        if(q[i].a == 1) {
            int idx = q[i].b - 1;
            int diff = q[i].c - v[idx];
            v[idx] = q[i].c;
            update(0, N-1, 1, idx, diff);
        }
        else cout << f(0, N-1, 1, q[i].b-1, q[i].c-1) << "\n";
    }
}
