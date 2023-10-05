#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Data Set " << t << ":\n";

        int N, M; cin >> N >> M;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        while(M--) {
            int x; cin >> x;

            v[x]--;
        }

        int ans = 0;

        for(int i=1; i<=N; i++) ans = max(ans, v[i]);

        cout << ans << "\n\n";
    }
}
