#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        int ans = INT_MAX;

        for(int i=0; i<=c; i++) {
            int val = max(a * i, a * (c - i) + b * d);

            ans = min(ans, val);
        }

        cout << ans << "\n";
   }
}
