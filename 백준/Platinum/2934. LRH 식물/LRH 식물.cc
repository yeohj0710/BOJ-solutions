#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> u, w; // u : tree, w : lazy

void lazy(int n, int b, int e) {
    if(w[n] == 0) return;

    u[n] += (e-b+1)*w[n];

    if(b != e) {
        w[n*2] += w[n];
        w[n*2 + 1] += w[n];
    }

    w[n] = 0;
}

int f(int n, int b, int e, int idx) {
    lazy(n, b, e);

    if(b == e) return u[n];

    if(idx <= (b+e)/2) return f(n*2, b, (b+e)/2, idx);
    else return f(n*2 + 1, (b+e)/2 + 1, e, idx);
}

int g(int n, int b, int  e, int l, int r, int add) {
    lazy(n, b, e);

    if(r < b || e < l) return u[n];

    if(l <= b && e <= r) {
        w[n] += add;
        lazy(n, b, e);
        return u[n];
    }

    int lv = g(n*2, b, (b+e)/2, l, r, add);
    int rv = g(n*2 + 1, (b+e)/2 + 1, e, l, r, add);

    return u[n] = lv + rv;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int MAX = 100000;

    u.resize(MAX*4);
    w.resize(MAX*4);

    int ans = 0;
    while(N--) {
        int l, r; cin >> l >> r;

        cout << f(1, 1, MAX, l) + f(1, 1, MAX, r) << "\n";

        g(1, 1, MAX, l, r, 1);

        g(1, 1, MAX, l, l, -f(1, 1, MAX, l));
        g(1, 1, MAX, r, r, -f(1, 1, MAX, r));
    }
}
