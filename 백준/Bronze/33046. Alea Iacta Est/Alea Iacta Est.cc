#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int ans = (a + b + c + d - 2) % 4 + 1;

    cout << ans << "\n";
}
