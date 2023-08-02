#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        int l = 0, r = 1e9, ans = 1e9;

        while(l <= r) {
            int m = (l + r) / 2;
            int sum = ((b - 1) * m + 1) * 100 + m * 10;

            if(sum >= a) {
                ans = min(ans, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        cout << ans << "\n";
    }
}
