#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    int mx = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i];

        v[i] = max(mx, v[i] + i);
        mx = max(mx, v[i]);
    }

    int m; cin >> m;

    while(m--) {
        int x; cin >> x;

        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << " ";
    }
    cout << "\n";
}
