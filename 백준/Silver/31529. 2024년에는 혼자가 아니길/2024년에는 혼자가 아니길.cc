#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x, y; cin >> x >> y;

    int ans = (x * 2 - y) * 2024 / 4;

    if(x > y || ans < 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << ans << "\n";
}
