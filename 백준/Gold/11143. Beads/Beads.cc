#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u;

void upd(int n, int b, int e, int idx, int diff) {
    if(idx < b || e < idx) return;

    u[n] += diff;

    if(b < e) {
        upd(n*2, b, (b+e)/2, idx, diff);
        upd(n*2 + 1, (b+e)/2 + 1, e, idx, diff);
    }
}

int f(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return 0;
    if(l <= b && e <= r) return u[n];

    return f(n*2, b, (b+e)/2, l, r) + f(n*2 + 1, (b+e)/2 + 1, e, l, r);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M, K; cin >> N >> M >> K;

        v.clear();
        v.resize(N+1);

        u.clear();
        u.resize(N*4);

        M += K;

        while(M--) {
            char Q; int a, b; cin >> Q >> a >> b;

            if(Q == 'P') {
                int diff = b;
                v[a] += b;
                upd(1, 1, N, a, diff);
            }
            else if(Q == 'Q') cout << f(1, 1, N, a, b) << "\n";
        }
    }
}
