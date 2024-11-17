#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 1;

    while(n--) {
        int x; cin >> x;

        ans = ans * x / __gcd(ans, x);
    }

    ans *= 2;

    cout << ans << "\n";
}
