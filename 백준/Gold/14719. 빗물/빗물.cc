#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> M >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=1; i<N-1; i++) {
        int l = v[i], r = v[i];

        for(int j=0; j<i; j++) l = max(l, v[j]);
        for(int j=i+1; j<N; j++) r = max(r, v[j]);

        ans += min(l, r) - v[i];
    }

    cout << ans << "\n";
}
