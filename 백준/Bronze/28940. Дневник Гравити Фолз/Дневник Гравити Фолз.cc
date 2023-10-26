#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    if(d > a || e > b) {
        cout << -1 << "\n";
        return 0;
    }

    int x = (a / d) * (b / e);

    cout << (c - 1) / x + 1 << "\n";
}
