#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int tc; cin >> tc;

    for(int t=1; t<=tc; t++) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

        int x = a * 144000 + b * 7200 + c * 360 + d * 20 + e * 1;

        int f; cin >> f;

        int y = f + (13 * 144000 - x) - 2456054;

        cout << "Data Set " << t << ":\n";

        if(y > 0) cout << y << "\n";
        else if(y == 0) cout << "Panic!\n";
        else cout << "It's a hoax!\n";

        cout << "\n";
    }
}
