#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    while(m--) {
        int x; cin >> x;

        int y = upper_bound(v.begin(), v.end(), x) - v.begin();

        int l = 1, r = INT_MAX;

        while(l <= r) {
            int md = (l + r) / 2;

            int z = 3 * md * (md - 1) + 1;

            if(z <= y) l = md + 1;
            else r = md - 1;
        }

        cout << l - 1 << " ";
    }

    cout << "\n";
}
