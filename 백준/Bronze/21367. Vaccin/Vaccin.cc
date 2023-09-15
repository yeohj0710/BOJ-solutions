#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        v[i] += v[i-1];
    }

    while(M--) {
        int x; cin >> x;

        x++;

        int l = 1, r = N, ans = INT_MAX;

        while(l <= r) {
            int m = (l + r) / 2;

            if(v[m] >= x) {
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }

        if(ans == INT_MAX) cout << -1 << "\n";
        else cout << ans << "\n";
    }
}
