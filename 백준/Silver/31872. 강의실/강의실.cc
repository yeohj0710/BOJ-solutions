#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    v.push_back(0);

    sort(v.begin(), v.end());

    vector<int> u;
    for(int i=1; i<v.size(); i++) u.push_back(v[i] - v[i-1]);

    sort(u.begin(), u.end(), greater<int>());

    int ans = v.back();

    for(int i=0; i<m; i++) ans -= u[i];

    cout << ans << "\n";
}
