#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    int ans = (n - (m * 2 - 1)) * (n - (k * 2 - 1)) - 1;

    if(ans < 0) ans = 0;

    cout << ans << "\n";
}
