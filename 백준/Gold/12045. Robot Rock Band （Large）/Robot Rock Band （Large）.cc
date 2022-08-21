#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<vector<int>> v(4, vector<int>(N));

        for(int i=0; i<4; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        vector<int> u, w;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) u.push_back(v[0][i] ^ v[1][j]);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) w.push_back(v[2][i] ^ v[3][j]);

        sort(u.begin(), u.end());
        sort(w.begin(), w.end());

        int ans = 0;

        for(int i=0; i<u.size(); i++)
            ans += upper_bound(w.begin(), w.end(), M ^ u[i]) - lower_bound(w.begin(), w.end(), M ^ u[i]);

        cout << "Case #" << t << ": " << ans << "\n";

    }
}
