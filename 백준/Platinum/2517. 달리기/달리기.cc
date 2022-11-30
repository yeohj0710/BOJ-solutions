#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u;

void upd(int n, int b, int e, int idx) {
    if(b == e) {
        u[n] = 1;
        return;
    }

    if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx);
    else upd(n*2 + 1, (b+e)/2 + 1, e, idx);

    u[n] = u[n*2] + u[n*2 + 1];
}

int cnt(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return 0;
    if(l <= b && e <= r) return u[n];

    int lv = cnt(n*2, b, (b+e)/2, l, r);
    int rv = cnt(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return lv + rv;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    u = v;

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    vector<int> w(N);
    for(int i=0; i<v.size(); i++)
        w[i] = lower_bound(u.begin(), u.end(), v[i]) - u.begin() + 1;

    v = w;

    u.clear();
    u.resize(N*4);

    for(int i=0; i<N; i++) {
        cout << cnt(1, 1, N, v[i]+1, N) + 1 << "\n";
        upd(1, 1, N, v[i]);
    }
}
