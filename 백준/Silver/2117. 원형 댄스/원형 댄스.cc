#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x; cin >> x;

    if(x % 2 == 0) {
        int y = x / 2 - 1;

        cout << y * (y + 1) << "\n";
    }
    else {
        int y = x / 2 - 1, z = x / 2;

        cout << y * (y + 1) / 2 + z * (z + 1) / 2 << "\n";
    }
}
