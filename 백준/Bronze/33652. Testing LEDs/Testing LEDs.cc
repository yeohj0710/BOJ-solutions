#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = LLONG_MAX;

    while(n--) {
        int a, b; cin >> a >> b;

        if(b == 0) ans = min(ans, a);
    }

    if(ans != LLONG_MAX) cout << ans << "\n";
    else cout << -1 << "\n";
}
