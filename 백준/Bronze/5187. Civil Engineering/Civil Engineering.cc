#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Data Set " << t << ":\n";

        int N, M; cin >> N >> M;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        int ans = 0;

        while(M--) {
            int a, b, c, d; cin >> a >> b >> c >> d;

            ans += a * b * c * v[d];
        }

        cout << ans << "\n";
    }
}
