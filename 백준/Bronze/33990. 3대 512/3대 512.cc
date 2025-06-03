#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = INT_MAX;

    while(n--) {
        int a, b, c; cin >> a >> b >> c;

        int tot = a + b + c;

        if(tot >= 512) ans = min(ans, tot);
    }

    if(ans != INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
