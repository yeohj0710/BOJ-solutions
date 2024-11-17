#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int mn = INT_MAX, mx = INT_MIN;

    while(n--) {
        int x; cin >> x;

        mn = min(mn, x);
        mx = max(mx, x);
    }

    cout << max(mn - mx / 2, (int)0) << "\n";
}
