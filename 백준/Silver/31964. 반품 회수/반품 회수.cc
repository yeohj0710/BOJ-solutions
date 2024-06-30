#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> u(n);
    for(int i=0; i<n; i++) cin >> u[i];

    int ans = 0;

    for(int i=0; i<n; i++) ans = max(ans, max(v[i], u[i]) + v[i]);

    cout << ans << "\n";
}
