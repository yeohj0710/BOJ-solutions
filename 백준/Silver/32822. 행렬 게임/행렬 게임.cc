#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> v(n+1, vector<int>(n+1)), u(v);

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> v[i][j];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin >> u[i][j];

    vector<int> w(n+1);

    for(int i=1; i<=n; i++) {
        int mx = 0;

        for(int j=1; j<=n; j++)
            mx = max(mx, abs(v[j][i] - u[j][i]));

        w[i] = mx;
    }

    int ans = 0;

    while(m--) {
        int x; cin >> x;

        ans += w[x];
    }

    cout << ans << "\n";
}
