#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M, K; cin >> N >> M >> K;

        vector<vector<int>> v(N, vector<int>(M));

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        int ans = 0;

        for(int i=0; i<M; i++) {
            int mx = 0;

            for(int j=0; j<N; j++) mx = max(mx, v[j][i]);

            ans += mx - v[K-1][i];
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
