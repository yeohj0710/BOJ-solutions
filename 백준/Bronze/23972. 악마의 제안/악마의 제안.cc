#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int l = 0, r = INT_MAX;

    while(l <= r) {
        int md = (l + r) / 2;

        int x = (md - n) * m;

        if(x < md) l = md + 1;
        else r = md - 1;
    }

    if(r != INT_MAX) cout << l << "\n";
    else cout << -1 << "\n";
}
