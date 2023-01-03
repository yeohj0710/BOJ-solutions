#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int x; cin >> x;

    x = 100 - x;

    int v[4] = {25, 10, 5, 1};

    for(int i=0; i<4; i++) {
        cout << x / v[i] << " ";

        x %= v[i];
    }

    cout << "\n";
}
