#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<(1<<n); i++) {
        vector<vector<int>> u = v;

        for(int j=0; j<n; j++) {
            if(!((i >> j) & 1)) continue;

            for(int k=0; k<m; k++) u[j][k] = !u[j][k];
        }

        int sum = 0;

        for(int j=0; j<m; j++) {
            int cnt = 0;

            for(int k=0; k<n; k++)
                if(u[k][j]) cnt++;

            sum += max(cnt, n - cnt);
        }

        ans = max(ans, sum);
    }

    cout << ans << "\n";
}
