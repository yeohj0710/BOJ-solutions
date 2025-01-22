#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n), u(m);
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=0; i<m; i++) cin >> u[i];

    int ans = 0;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) ans += (v[i] + u[j]) * max(v[i], u[j]);

    cout << ans << "\n";
}
