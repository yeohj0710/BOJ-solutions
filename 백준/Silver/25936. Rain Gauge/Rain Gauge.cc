#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    int T; cin >> T;

    while(T--) {
        double a, r; cin >> a >> r;

        if(r*2 <= a) cout << M_PI * r * r << "\n";
        else if(r*r*2 >= a*a) cout << a * a << "\n";
        else {
            double th = acos(a / (r*2));

            double tmp = r*r * ((M_PI / 4) - th);

            cout << a/2 * sqrt(r*r - a*a/4) * 4 + tmp * 4 << "\n";
        }
    }
}
