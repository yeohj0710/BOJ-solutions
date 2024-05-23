#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        cout << "Case #" << t << ": ";

        int n, m, k; cin >> n >> m >> k;

        vector<int> v(k);
        for(int i=0; i<k; i++) cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int ans = 0;

        for(int i=0; i<k; i++)
            ans += v[i] * (i / m + 1);

        cout << ans << "\n";
    }
}
