#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> v(N), u(N*4);

        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<N*4; i++) cin >> u[i];

        sort(v.begin(), v.end());
        sort(u.begin(), u.end(), greater<int>());

        int ans = 0;

        for(int i=0; i<N*4; i++)
            ans = max(ans, v[i/4] + u[i]);

        cout << "Trip #" << t << ": " << ans << "\n";
    }
}
