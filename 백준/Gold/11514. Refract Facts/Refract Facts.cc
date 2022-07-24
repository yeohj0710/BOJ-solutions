#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    while(true) {
        double d, h, x, n1, n2; cin >> d >> h >> x >> n1 >> n2;
        if(d == 0 && h == 0 && x == 0 && n1 == 0 && n2 == 0) break;

        double l = 0, r = x;

        while(l + 1e-3 < r) {
            double m = (l + r)/2;

            double val = (m * sqrt((x - m)*(x - m) + d*d)) / ((x - m) * sqrt(m*m + h*h));

            if(val < n2/n1) l = m;
            else r = m;
        }

        cout << atan(d/(x - l)) * 180.0 / M_PI << "\n";
    }
}
