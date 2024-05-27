#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int ans = 0;

    while(n--) {
        int x; cin >> x;

        ans += x;
    }

    while(m--) {
        int x; cin >> x;

        if(x >= 1) ans *= x;
    }

    cout << ans << "\n";
}
