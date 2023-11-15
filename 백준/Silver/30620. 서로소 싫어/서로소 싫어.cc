#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x, y; cin >> x >> y;

    cout << 2 << "\n";
    cout << x * (y - 1) << "\n";
    cout << -(x - 1) * y << "\n";
}
