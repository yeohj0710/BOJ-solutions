#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<pair<int, int>> v;
vector<int> u;

void upd(int n, int b, int e, int idx) {
    if(b == e) {
        u[n] += 1;
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

    int N, M; cin >> N >> M;

    v.resize(M);

    for(int i=0; i<M; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    u.resize(N*4);

    int ans = 0;
    for(int i=0; i<M; i++) {
        ans += cnt(1, 1, N, v[i].second + 1, N);
        upd(1, 1, N, v[i].second);
    }

    cout << ans << "\n";
}
