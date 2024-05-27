#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 0;

    while(n--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        int x = ans % (c + d);
        int y = 0;

        if(x < c) y = a;
        else y = (c + d) - x + a;

        ans += min(y, b);
    }

    cout << ans << "\n";
}
