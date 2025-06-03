#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int mn = INT_MAX, mx = INT_MIN;

    while(n--) {
        int a, b; cin >> a >> b;

        mx = max(mx, a);
        mn = min(mn, b);
    }

    cout << (mx * mn) % 7 + 1 << "\n";
}
