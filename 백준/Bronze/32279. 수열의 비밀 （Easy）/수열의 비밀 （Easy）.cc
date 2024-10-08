#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int p, q, r, s; cin >> p >> q >> r >> s;

    vector<int> v(n+1);
    cin >> v[1];

    for(int i=2; i<=n; i++) {
        if(i % 2 == 0) v[i] = p * v[i / 2] + q;
        else v[i] = r * v[(i - 1) / 2] + s;
    }

    int ans = 0;

    for(int i=1; i<=n; i++) ans += v[i];

    cout << ans << "\n";
}
