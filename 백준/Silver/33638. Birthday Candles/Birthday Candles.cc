#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cin >> v[i][j];

        sort(v[i].begin(), v[i].end());
    }

    int ans = 0;

    for(int i=0; i<m; i++) {
        vector<int> u(n);

        for(int j=0; j<n; j++) u[j] = v[j][i];

        sort(u.begin(), u.end());

        for(int j=0; j<n; j++) {
            if(u[j] > k) {
                cout << ans << "\n";
                return 0;
            }

            k -= u[j];
            ans++;
        }
    }

    cout << n * m << "\n";
}
