#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int ans = 0;

    for(int i=0; i<n; i++) {
        int x; cin >> x;

        ans += x;
    }

    ans += min(n - m, m - 1) + (n - 1);

    cout << ans << "\n";
}
