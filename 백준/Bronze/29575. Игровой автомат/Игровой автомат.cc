#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    unordered_map<int, int> mp;

    while(n--) {
        int a, b; cin >> a >> b;

        mp[a] = b;
    }

    int m; cin >> m;

    int ans = 0;

    while(m--) {
        int x; cin >> x;

        ans += mp[x] - 10;
    }

    cout << ans << "\n";
}
