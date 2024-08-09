#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int n; cin >> n;

        if(n == 0) break;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        int ans = 0;

        for(int i=2; i<n; i++)
            ans = max(ans, v[i-2] + v[i-1] + v[i]);

        cout << ans << "\n";
    }
}
