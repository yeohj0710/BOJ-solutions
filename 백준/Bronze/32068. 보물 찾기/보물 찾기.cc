#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int a, b, c; cin >> a >> b >> c;

        int ans = min((c - a) * 2 + 1, (b - c) * 2);

        cout << ans << "\n";
    }
}
