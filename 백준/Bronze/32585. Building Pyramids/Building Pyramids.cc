#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 0, x = 0;

    for(int i=1; i<=n; i++) {
        x += i;
        ans += x;
    }

    cout << ans << "\n";
}
