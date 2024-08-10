#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n, m, a, b; cin >> n >> m >> a >> b;

        vector<vector<bool>> v(n, vector<bool>(m));
        int ans = 0;

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) {
                int x = i - a, y = j - b;

                if(x < 0 || y < 0) {
                    v[i][j] = true;
                    ans++;
                    continue;
                }

                if(v[x][y]) continue;

                v[i][j] = true;
                ans++;
            }

        cout << ans << "\n";
    }
}
