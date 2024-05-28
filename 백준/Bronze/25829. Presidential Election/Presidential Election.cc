#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int a = 0, b = 0, c = 0, d = 0;

    while(n--) {
        int x, y, z; cin >> x >> y >> z;

        c += y, d += z;

        if(y > z) a += x;
        else if(y < z) b += x;
    }

    if(a > b && c > d) cout << 1 << "\n";
    else if(a < b && c < d) cout << 2 << "\n";
    else cout << 0 << "\n";
}
