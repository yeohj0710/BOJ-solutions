#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n  >> m;

    int ans = (n - 2) * (m - 2) * 8 + ((n - 2) * 2 + (m - 2) * 2) * 5 + 4 * 3;

    ans /= 2;

    cout << ans << "\n";
}
