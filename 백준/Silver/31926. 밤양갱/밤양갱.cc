#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 10;

    while(n / 2 > 0) {
        n /= 2;
        ans++;
    }

    cout << ans << "\n";
}
