#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    int M; cin >> M;

    vector<int> u(M);
    for(int i=0; i<M; i++) cin >> u[i];

    int ans = 0;

    for(int i=0; i<N; i++) {
        int l = 0, r = M-1, idx = -1;

        while(l <= r) {
            int m = (l + r) / 2;

            if(v[i].second >= u[m]) {
                idx = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        if(idx == -1) continue;

        if(v[i].first <= u[idx]) ans++;
    }

    cout << ans << "\n";
}
