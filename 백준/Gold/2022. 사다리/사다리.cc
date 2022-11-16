#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    double x, y, c; cin >> x >> y >> c;

    double l = 0, r = 1e12, tr = 1e2;

    while(tr--) {
        double m = (l + r) / 2;

        double val = 1.0 / sqrt(x*x - m*m) + 1.0 / sqrt(y*y - m*m);

        if(val < 1.0 / c) l = m;
        else r = m;
    }

    cout << l << "\n";
}
