#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int ans = ((c - 1) / a + 1) * ((d - 1) / b + 1);

    cout << ans << "\n";
}
