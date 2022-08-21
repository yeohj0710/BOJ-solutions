#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int M, N; cin >> M >> N;

        vector<vector<int>> v(4, vector<int>(N));

        for(int i=0; i<4; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        vector<int> u, w;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) u.push_back(v[0][i] + v[1][j]);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) w.push_back(v[2][i] + v[3][j]);

        sort(u.begin(), u.end());
        sort(w.begin(), w.end());

        int ans = INT_MAX;

        for(int i=0; i<u.size(); i++) {
            int x = lower_bound(w.begin(), w.end(), M - u[i]) - w.begin();

            if(x < w.size()) {
                if(abs(u[i] + w[x] - M) < abs(ans - M)) ans = u[i] + w[x];
                else if(abs(u[i] + w[x] - M) == abs(ans - M)) ans = min(ans, u[i] + w[x]);
            }

            if(x > 0) {
                if(abs(u[i] + w[x-1] - M) < abs(ans - M)) ans = u[i] + w[x-1];
                else if(abs(u[i] + w[x-1] - M) == abs(ans - M)) ans = min(ans, u[i] + w[x-1]);
            }
        }

        cout << ans << "\n";
    }
}
