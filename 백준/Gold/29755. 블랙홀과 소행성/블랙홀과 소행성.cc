#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<pair<int, int>> u(M);

    for(int i=0; i<M; i++) cin >> u[i].first >> u[i].second;

    int l = 0, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r) / 2;

        vector<bool> w(M);

        for(int i=0; i<M; i++) {
            int idx = lower_bound(v.begin(), v.end(), u[i].first) - v.begin();

            if(idx - 1 >= 0) {
                if(abs(v[idx - 1] - u[i].first) * u[i].second <= m) w[i] = true;
            }
            if(idx < N) {
                if(abs(v[idx] - u[i].first) * u[i].second <= m) w[i] = true;
            }
            if(idx + 1 < N) {
                if(abs(v[idx + 1] - u[i].first) * u[i].second <= m) w[i] = true;
            }
        }

        bool chk = true;

        for(int i=0; i<M; i++)
            if(!w[i]) chk = false;

        if(chk) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
