#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int ans = -1;

    while(n--) {
        int a, b; cin >> a >> b;

        if(a + b <= m) ans = max(ans, a);
    }

    cout << ans << "\n";
}
