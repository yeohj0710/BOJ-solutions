#include <bits/stdc++.h>
#define int long long
using namespace std;

double h, r, da, dw;

double f(double hw) {
    double ha = h - hw;
    double cw = hw / 2, ca = hw + ha / 2;

    return (ha*da*ca + hw*dw*cw) / (ha*da + hw*dw);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    cin >> h >> r >> da >> dw;

    double l = 0, r = h, tr = 1e2;

    while(tr--) {
        double m1 = (l*2 + r) / 3;
        double m2 = (l + r*2) / 3;

        double a = f(m1);
        double b = f(m2);

        if(a > b) l = m1;
        else if(a < b) r = m2;
    }

    cout << (l + r) / 2 << "\n";
}
