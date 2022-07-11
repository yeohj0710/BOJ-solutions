#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    double b = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
    double c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));

    double r = 0.25 * sqrt(4*a*a*b*b - pow(a*a + b*b - c*c, 2)) / ((a + b + c)/2);

    double r2; cin >> r2;

    cout << fixed;
    cout.precision(3);

    cout << r/r2 * 100 - 100 << "\n";
}
