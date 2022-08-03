#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    while(true) {
        double D, V; cin >> D >> V;
        if(D == 0 && V == 0) break;

        double l = 0, r = D;

        while(l + 1e-5 < r) {
            double m = (l + r)/2;

            double V1 = (1.0/3.0) * M_PI * (1.0/2.0) * (D - m) * (D*D/4 + D*m/4 + m*m/4);

            double Vt = M_PI*D*D*D/4 - 2*V1 - M_PI*m*m*m/4;

            if(Vt > V) l = m;
            else r = m;
        }

        cout << l << "\n";
    }
}
