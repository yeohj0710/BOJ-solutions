#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int mn = INT_MIN, mx = INT_MAX;

    while(n--) {
        int a, b; cin >> a >> b;

        mn = max(mn, a);
        mx = min(mx, b);
    }

    int ans = mx - mn + 1;

    if(ans <= 0) {
        cout << "bad news\n";
        return 0;
    }

    cout << ans << " " << mn << "\n";
}
