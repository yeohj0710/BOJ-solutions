#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int l = 0, r = 1e7;

    while(l <= r) {
        int m = (l + r) / 2;

        int x = m * (m + 1) / 2;

        if(x <= n) l = m + 1;
        else r = m - 1;
    }

    cout << l - 1 << "\n";
}
