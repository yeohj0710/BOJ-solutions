#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double x, y; cin >> x >> y;

    for(int i=0; i<10000; i++) {
        double px = x, py = y;

        x = (px + py) / 2;
        y = 2 * px * py / (px + py);
    }

    cout << fixed;
    cout.precision(6);

    cout << x << " " << y << "\n";
}
