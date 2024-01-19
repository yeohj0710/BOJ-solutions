#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int l = 1, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r) / 2;

        int a = 0, b = 0, x = 2;

        while(x <= m) {
            a += m / x;

            x *= 2;
        }

        x = 5;

        while(x <= m) {
            b += m / x;

            x *= 5;
        }

        if(min(a, b) >= N) {
            if(min(a, b) == N) ans = min(ans, m);

            r = m - 1;
        }
        else l = m + 1;
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
