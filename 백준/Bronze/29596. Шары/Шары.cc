#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x1, v1, x2, v2, t; cin >> x1 >> v1 >> x2 >> v2 >> t;

    bool chk = false;

    if(x1 < x2) chk = true;

    x1 += v1 * t;
    x2 += v2 * t;

    if((chk && x1 > x2) || (!chk && x1 < x2)) {
        swap(x1, x2);
        swap(v1, v2);
    }

    cout << x1 << " " << v1 << "\n";
    cout << x2 << " " << v2 << "\n";
}
